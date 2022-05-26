// #include <common.h>
#include <memory/paddr.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

#define MAX_SIM_TIME 100
uint64_t sim_time = 0;
bool run_flag = true;

#ifdef CONFIG_WATCHPOINT
bool scan_wp();
#endif
void single_cycle();

/* itrace */
union{
  uint32_t val; 
}instr;

char logbuf[128];
// DPI-C得到指令
extern void get_inst(int inst) {
  instr.val = inst;
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

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT
  // scan watchpoints
  bool flag = scan_wp();
  if (!flag && nemu_state.state == NEMU_RUNNING) {
    nemu_state.state = NEMU_STOP;
  }
#endif
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static void exec_once(Decode *s) {
  s->pc = top->pc;
  s->snpc = top->pc;

  // single_cycle();
  isa_exec_once(s);
  cpu.pc = s->dnpc;

#ifdef CONFIG_ITRACE
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);
  int ilen = snpc - pc;
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
  // puts(logbuf);
  
  disassemble(p, logbuf + sizeof(logbuf) - p,
      pc, (uint8_t *)&instr.val, ilen);
  
  puts(logbuf);
  // iringbuf
  strcpy(rbuf[rptr], logbuf);
  rptr = (rptr + 1) % 20;
#endif
}

void execute(uint64_t n) {
  uint64_t t = 0;
  Decode s;
  while (t < n && sim_time < MAX_SIM_TIME && run_flag) {
    exec_once(&s);
    g_nr_guest_inst ++;
    sim_time++;
	  t++;
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
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

void assert_fail_msg() {
  dump_gpr();
  statistic();
}

void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  // TODO:npc_state相关操作
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;


  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      #ifdef CONFIG_ITRACE
      // output iringbuf
      if (nemu_state.state == NEMU_ABORT || nemu_state.halt_ret != 0)
        prbuf();
      #endif
      // fall through
    case NEMU_QUIT: statistic();
  }
}

void reset(int n) {
    top->rst = 1;
    while (n--) single_cycle();
    top->rst = 0;
}

void finish_sim() {
	printf("simulation finished\n");
	run_flag = false;
}