#include <common.h> 
#include <memory/paddr.h>
#include <cpu/cpu.h>
#include <veri.h>

/* 全局变量定义 声明 */

Vtop* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

/* 函数声明 */
void init_monitor(int, char *[]);
void am_init_monitor();
int is_exit_status_bad();
void sdb_mainloop();

/* 仿真开始结束相关 */

void single_cycle() {
    top->clk = 1; top->eval(); 
    #ifdef CONFIG_DUMPWAVE
    contextp->timeInc(1); tfp->dump(contextp->time());
    #endif
    top->clk = 0; top->eval();
    #ifdef CONFIG_DUMPWAVE
    contextp->timeInc(1); tfp->dump(contextp->time());
    #endif
}

void rst_cycle() {
    top->clk = 0; top->eval();
    #ifdef CONFIG_DUMPWAVE
    contextp->timeInc(1); tfp->dump(contextp->time());
    #endif
    top->clk = 1; top->eval();
    #ifdef CONFIG_DUMPWAVE
    contextp->timeInc(1); tfp->dump(contextp->time());
    #endif
}

void reset(int n) {
    top->rst = 1;
    while (n--) single_cycle();
    top->rst = 0;
    // top->clk = 0; top->eval();
    // #ifdef CONFIG_DUMPWAVE
    // contextp->timeInc(1); tfp->dump(contextp->time());
    // #endif
}

void sim_init() {
  #ifdef CONFIG_DUMPWAVE
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  #endif
  top = new Vtop;
  #ifdef CONFIG_DUMPWAVE
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("/home/bill/ysyx-workbench/npc/vcd/dump.vcd");
  #endif

	// printf("image form:%s\n", arg);
	// FILE *fp = fopen(arg, "rb");
	// assert(fp);
	// fseek(fp, 0, SEEK_END);
	// long size = ftell(fp);
	// fseek(fp, 0, SEEK_SET);
	// int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
	// assert(ret == 1);
	// fclose(fp);
	// // for (int i = 0; i < size; i++)
	// // 	printf("%c ", pmem[i]);
	// // printf("\n");

  // init_sdb();

  // init_disasm("riscv64" "-pc-linux-gnu");
}

void sim_exit() {
    // single_cycle();
    #ifdef CONFIG_DUMPWAVE
    tfp->close();
    delete contextp;
    delete tfp;
    #endif
}

int main(int argc, char *argv[]) {
  sim_init();
  reset(4);

  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  sdb_mainloop();

  sim_exit();
  return 0;
}
