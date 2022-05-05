#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

#define MAX_SIM_TIME 20
#define CONFIG_MBASE 0x80000000
uint64_t sim_time = 0;
uint8_t pmem[10010] = {};
uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static inline uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
  }
}

static uint64_t pmem_read(uint64_t addr) {
  uint64_t ret = host_read(guest_to_host(addr), 4);
  return ret;
}

static Vtop* top;

void single_cycle() {
    top->clk = 0; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
    top->clk = 1; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
}

void reset(int n) {
    top->rst = 1;
    while (n--) single_cycle();
    top->rst = 0;
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");

	FILE *fp = fopen("/home/bill/ysyx-workbench/npc/csrc/insts.txt", "rb");
	assert(fp);
	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	int ret = fread(pmem, size, 1, fp);
	assert(ret == 1);
	fclose(fp);
	for (int i = 0; i < size; i++)
		printf("%c ", pmem[i]);
	printf("\n");
}

void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
}

int main() {
  sim_init();

  reset(4);
  while (sim_time < MAX_SIM_TIME) {
	  top->inst = pmem_read(top->pc);
      single_cycle();
      sim_time++;
  }

  sim_exit();
}