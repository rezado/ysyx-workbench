`include "defines.v"

module ysyx_22040088_IFU(
    input       clk,
    input       rst,
	input       ena,
	input [63:0] branchpc,
	input       branch,
	// 来自AXI接口
	input		rw_ready,  // 读数据有效
	input [63:0] data_read,  // 读数据

    output [63:0] pc,
	output [31:0] inst,
	output        if_stall,
	output        all_stall,

	// 与总线接口
	output		rw_valid,  // 读地址有效
	output      rw_req,  // 读写类型
	output [63:0] rw_addr,   // 读地址
	output [ 1:0] rw_size  // 读大小
);

// pre-if
wire [63:0]nextpc;
wire [63:0]addpc;
wire br_stall;  // 转移计算未完成
assign br_stall = ~ena && branch;

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.wen    (ena    ),
	.pc_src (nextpc ),
	.pc_out (pc     )
);

assign addpc = pc + 4;

// 选择nextpc
// always @(posedge clk) begin
// 	if (rst) nextpc <= 64'h80000000;
// 	else if (branch) nextpc <= branchpc;
// 	else if (~ena) nextpc <= pc;
// 	else nextpc <= addpc;
// end
assign nextpc = rst    ? 64'h7ffffffc :
		        branch ? branchpc :
				         addpc;

// ICache
wire [ 5:0]   index;
wire [22:0]   tag;
wire [ 2:0]   off;
/* verilator lint_off UNUSED */
wire addr_ok, data_ok;  // 握手信号
wire [31:0] icache_rdata;
wire valid;
assign off = nextpc[2:0];
assign index = nextpc[8:3];
assign tag = nextpc[31:9];
assign valid = (~rst && addr_ok);  // 只有跳转之后才发出icache读请求

assign inst = icache_rdata;

icache u_icache(
	.clk      (clk      ),
	.rst      (rst      ),
	.valid    (valid    ),
	.index    (index    ),
	.tag      (tag      ),
	.offset   (off      ),
	.addr_ok  (addr_ok  ),
	.data_ok  (data_ok  ),
	.rdata    (icache_rdata    ),
	.rd_ready (rw_ready ),
	.ret_data (data_read ),
	.rd_valid (rw_valid ),
	.rw_req   (rw_req   ),
	.rd_addr  (rw_addr  ),
	.rd_size  (rw_size  )
);


assign all_stall = ~addr_ok;
assign if_stall = 1'b0;

endmodule
