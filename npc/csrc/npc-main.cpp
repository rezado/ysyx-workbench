#include <common.h> 
#include <cpu/cpu.h>
#include <veri.h>
#include <axi4_mem.hpp>

/* 全局变量定义 声明 */

Vtop* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

axi4_mem<64, 64, 4> mem(4096l * 1024 * 1024);
axi4_ptr<64, 64, 4> mem_ptr;
axi4_ref<64, 64, 4> mem_ref(mem_ptr);
axi4<64, 64, 4> mem_sigs;
axi4_ref<64, 64, 4> mem_sigs_ref(mem_sigs);

/* 函数声明 */
void init_monitor(int, char *[]);
void am_init_monitor();
int is_exit_status_bad();
void sdb_mainloop();

/* AXI接口相关 */
void connect_wire(axi4_ptr<64, 64, 4> mem_ptr) {
  mem_ptr.awready   = &(top->axi_aw_ready_i);
  mem_ptr.awaddr    = &(top->axi_aw_addr_o);
  mem_ptr.awburst   = &(top->axi_aw_burst_o);
  mem_ptr.awid      = &(top->axi_aw_id_o);
  mem_ptr.awlen     = &(top->axi_aw_len_o);
  mem_ptr.awsize    = &(top->axi_aw_size_o);
  mem_ptr.awvalid   = &(top->axi_aw_valid_o);

  mem_ptr.wready    = &(top->axi_w_ready_i);
  mem_ptr.wdata     = &(top->axi_w_data_o);
  mem_ptr.wlast     = &(top->axi_w_last_o);
  mem_ptr.wstrb     = &(top->axi_w_strb_o);
  mem_ptr.wvalid    = &(top->axi_w_valid_o);

  mem_ptr.arready   = &(top->axi_ar_ready_i);
  mem_ptr.araddr    = &(top->axi_ar_addr_o);
  mem_ptr.arburst   = &(top->axi_ar_burst_o);
  mem_ptr.arid      = &(top->axi_ar_id_o);
  mem_ptr.arlen     = &(top->axi_ar_len_o);
  mem_ptr.arsize    = &(top->axi_ar_size_o);
  mem_ptr.arvalid   = &(top->axi_ar_valid_o);

  mem_ptr.rready    = &(top->axi_r_ready_o);
  mem_ptr.rdata     = &(top->axi_r_data_i);
  mem_ptr.rid       = &(top->axi_r_id_i);
  mem_ptr.rlast     = &(top->axi_r_last_i);
  mem_ptr.rresp     = &(top->axi_r_resp_i);
  mem_ptr.rvalid    = &(top->axi_r_valid_i);

  mem_ptr.bready    = &(top->axi_b_ready_o);
  mem_ptr.bid       = &(top->axi_b_id_i);
  mem_ptr.bresp     = &(top->axi_b_resp_i);
  mem_ptr.bvalid    = &(top->axi_b_valid_i);
}

/* 仿真开始结束相关 */

void single_cycle() {

    top->clk = 1;
    mem_sigs.update_input(mem_ref);
    top->eval(); 
    #ifdef CONFIG_DUMPWAVE
    contextp->timeInc(1); tfp->dump(contextp->time());
    #endif
    top->clk = 0;
    mem.beat(mem_sigs_ref);
    mem_sigs.update_output(mem_ref);
    top->eval();
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
  reset(2);

  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  connect_wire(mem_ptr);
  assert(mem_ptr.check());
  
  printf("\033[1;32m check complete \033[0m\n");

  /* Start engine. */
  sdb_mainloop();

  sim_exit();
  return 0;
}
