<<<<<<< HEAD
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

#define MAX_SIM_TIME 20
#define CONFIG_MBASE 0x80000000
uint64_t sim_time = 0;
uint8_t pmem[10010] = {};
uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }

uint32_t insts[10010] = {};

bool flag = true;

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
=======
#include <common.h> 
#include <memory/paddr.h>
#include <cpu.h>

/* 全局变量定义 声明 */

Vtop* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

/* 函数声明 */
void init_sdb();

/* 仿真开始结束相关 */
>>>>>>> npc

void single_cycle() {
    top->clk = 0; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
    top->clk = 1; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
<<<<<<< HEAD
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
	flag = true;

	FILE *fp = fopen("/home/bill/ysyx-workbench/npc/csrc/1.bin", "rb");
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

	insts[0] = 0x100093;
	insts[1] = 0x108113;
	insts[2] = 0xFFF0C193;
}

void finish_sim() {
	printf("simulation finished\n");
	flag = false;
}

=======
}

extern "C" void init_disasm(const char *triple);
void sim_init(char *arg) {
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
	printf("image form:%s\n", arg);

	FILE *fp = fopen(arg, "rb");
	assert(fp);
	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
	assert(ret == 1);
	fclose(fp);
	// for (int i = 0; i < size; i++)
	// 	printf("%c ", pmem[i]);
	// printf("\n");

  init_sdb();

  init_disasm("riscv64" "-pc-linux-gnu");
}

>>>>>>> npc
void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
}

<<<<<<< HEAD
int main() {
  sim_init();

  reset(4);
  while (sim_time < MAX_SIM_TIME && flag) {
	  top->inst = pmem_read(top->pc);
	//   top->inst = insts[(top->pc - CONFIG_MBASE) / 4];
	  printf("%x\n", top->inst);
      single_cycle();
      sim_time++;
  }
=======
extern void sdb_mainloop();

int main(int argc, char *argv[]) {
  assert(argv[1]);
  sim_init(argv[1]);

  reset(4);

  sdb_mainloop();
>>>>>>> npc

  sim_exit();
}
