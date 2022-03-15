#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

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
}

void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
}

int main() {
  sim_init();

  reset(10);
  while (sim_time < MAX_SIM_TIME) {
      single_cycle();
      sim_time++;
  }

  sim_exit();
}