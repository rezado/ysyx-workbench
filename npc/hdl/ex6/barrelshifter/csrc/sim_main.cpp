#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

static Vtop* top;


void step_and_dump_wave() {
    top->clk = !top->clk;
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vdecode24;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
    delete contextp;
    delete tfp;
}

int main() {
  sim_init();

  top->clk = 0;
  top->in = 0b00000001;
  while (sim_time < MAX_SIM_TIME) {
      step_and_dump_wave();
      sim_time++;
  }

  sim_exit();
}
