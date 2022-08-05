// #include <common.h>
#include <memory/paddr.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <veri.h>

#define MAX_INST_TO_PRINT 10

CPU_state CPU = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
#ifdef CONFIG_DUMPWAVE
#define MAX_SIM_TIME 100000
#endif
uint64_t sim_time = 0;
bool run_flag = true;

#ifdef CONFIG_WATCHPOINT
bool scan_wp();
#endif
void single_cycle();

void gprcpy();
bool first_exec = true;

/* itrace */
union{
  uint32_t val; 
}instr;

char logbuf[128];
// DPI-C得到指令
extern void get_inst(int inst) {
  instr.val = inst;
  // printf("inst:%x\n", inst);
}

#ifdef CONFIG_ITRACE
char rbuf[20][128];
int rptr;
static void prbuf() {
  int i;
  for (i = 0; i < 20; i++) {
    if (rbuf[i][0] == 0) break;
    if (i != rptr - 1) printf("    ");
    else printf(" -->");
    puts(rbuf[i]);
  }
}
#endif
static bool skip = false;
// static uint64_t pre_pc;
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  // DIFFTEST比DUT晚一个周期更新
  if (sim_time <= 4 || skip) {
    skip = false;
    difftest_skip_ref();
    printf("time:%d pc:%x inst:%x\n", g_nr_guest_inst, _this->pc, instr.val);
  }
  else if (instr.val == 0) {
    skip = true;
    printf("pc:%x npc:%x\n", _this->pc, dnpc);
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, _this->pc));
  }
  else IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT
  // scan watchpoints
  bool flag = scan_wp();
  if (!flag && npc_state.state == NEMU_RUNNING) {
    npc_state.state = NEMU_STOP;
  }
#endif
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static void exec_once(Decode *s) {
  s->pc = top->pc;
  s->snpc = top->pc;

  isa_exec_once(s);
  gprcpy();  // 通过DPI-C更新寄存器状态
  CPU.pc = s->dnpc;

#ifdef CONFIG_ITRACE
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&instr.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  
  disassemble(p, logbuf + sizeof(logbuf) - p,
      s->pc, (uint8_t *)&instr.val, ilen);
  
  strcpy(s->logbuf, logbuf);
  
  // iringbuf
  if (instr.val != 0) {
    strcpy(rbuf[rptr], logbuf);
    rptr = (rptr + 1) % 20;
  }
#endif
}

void execute(uint64_t n) {
  uint64_t t = 0;
  Decode s;
  while (t < n && run_flag) {
    exec_once(&s);
    g_nr_guest_inst ++;
    sim_time++;
	  t++;
    trace_and_difftest(&s, CPU.pc);
    if (npc_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
    #ifdef CONFIG_DUMPWAVE
    if (t > MAX_SIM_TIME) {
      Log("Reach MAX_SIM_TIME at pc:" FMT_WORD , s.pc);
      break;
    }
    #endif
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void sim_exit();
void assert_fail_msg() {
  dump_gpr();
  statistic();
  sim_exit();
}

void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  // TODO:npc_state相关操作
  switch (npc_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: npc_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;


  switch (npc_state.state) {
    case NEMU_RUNNING: npc_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (npc_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      #ifdef CONFIG_ITRACE
      // output iringbuf
      if (npc_state.state == NEMU_ABORT || npc_state.halt_ret != 0)
        prbuf();
      #endif
      // fall through
    case NEMU_QUIT: statistic();
  }
}

void finish_sim() {
	printf("simulation finished\n");
	run_flag = false;
  bool flag = false;
  NPCTRAP(CPU.pc, isa_reg_str2val("a0", &flag));
}