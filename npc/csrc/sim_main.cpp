#include <common.h> 
#include <memory/paddr.h>
#include <cpu/cpu.h>

/* 全局变量定义 声明 */

Vtop* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

/* 函数声明 */
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

/* 仿真开始结束相关 */

void single_cycle() {
    top->clk = 0; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
    top->clk = 1; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
}

void sim_init() {
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
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
  engine_start();

  sim_exit();
  return 0;
}
