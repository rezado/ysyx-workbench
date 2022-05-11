#include <common.h>
#include <memory/paddr.h>

#define MAX_SIM_TIME 100
uint64_t sim_time = 0;
bool run_flag = true;

bool scan_wp();
void single_cycle();

void cpu_exec(uint64_t n) {
	uint64_t t = 0;
	while (t < n && sim_time < MAX_SIM_TIME && run_flag) {
	  top->inst = paddr_read(top->pc, 4);
	//   top->inst = insts[(top->pc - CONFIG_MBASE) / 4];
	  printf("%x\n", top->inst);
    single_cycle();
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