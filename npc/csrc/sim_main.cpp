#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <common.h>
#include <reg.h>
#include <memory/paddr.h>

/* 全局变量定义 声明 */

Vtop* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

#define MAX_SIM_TIME 100
uint64_t sim_time = 0;
bool flag = true;


/* CPU执行相关 */

void single_cycle() {
    top->clk = 0; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
    top->clk = 1; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
}

void cpu_exec(uint64_t n) {
	uint64_t t = 0;
	while (t < n && sim_time < MAX_SIM_TIME && flag) {
	  top->inst = pmem_read(top->pc, 4);
	//   top->inst = insts[(top->pc - CONFIG_MBASE) / 4];
	  printf("%x\n", top->inst);
      single_cycle();
      sim_time++;
	  t++;
  }
}

void reset(int n) {
    top->rst = 1;
    while (n--) single_cycle();
    top->rst = 0;
}

/* 仿真开始结束相关 */

void sim_init(char *arg) {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");
	flag = true;
	printf("image form:%s\n", arg);

	FILE *fp = fopen(arg, "rb");
	assert(fp);
	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	int ret = fread(pmem, size, 1, fp);
	assert(ret == 1);
	fclose(fp);
	// for (int i = 0; i < size; i++)
	// 	printf("%c ", pmem[i]);
	// printf("\n");
}

void finish_sim() {
	printf("simulation finished\n");
	flag = false;
}

void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
}

extern void sdb_mainloop();

int main(int argc, char *argv[]) {
  assert(argv[1]);
  sim_init(argv[1]);

  reset(4);

  sdb_mainloop();

  sim_exit();
}
