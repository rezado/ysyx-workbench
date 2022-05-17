#include <common.h>
#include <memory/paddr.h>

#define MAX_SIM_TIME 100
uint64_t sim_time = 0;
bool run_flag = true;

bool scan_wp();
void single_cycle();

/* itrace */
uint32_t instr;
char logbuf[128];
// DPI-C得到指令
extern void get_inst(int inst) {
  instr = inst;
}

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

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static void exec_once() {
  uint64_t pc = top->pc;
  uint64_t snpc = top->pc + 4;

  single_cycle();

  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);
  int ilen = snpc - pc;
  int i;
  uint8_t *inst = (uint8_t *)&instr;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  puts(logbuf);
  
  disassemble(p, logbuf + sizeof(logbuf) - p,
      pc, (uint8_t *)instr, ilen);
  
  // puts(logbuf);
  // iringbuf
  strcpy(rbuf[rptr], logbuf);
  rptr = (rptr + 1) % 20;
}

void cpu_exec(uint64_t n) {
	uint64_t t = 0;
	while (t < n && sim_time < MAX_SIM_TIME && run_flag) {
	  top->inst = paddr_read(top->pc, 4);
    exec_once();
    bool flag = scan_wp();
    sim_time++;
	  t++;
    if (!flag) {
      break;
    }
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