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

void single_cycle() {
    top->clk = 0; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
    top->clk = 1; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time());
    
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

void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
}

extern void sdb_mainloop();

int main(int argc, char *argv[]) {
  assert(argv[1]);
  puts("1");
  sim_init(argv[1]);
  puts("1");

  reset(4);
  sdb_mainloop();

  sim_exit();
}
