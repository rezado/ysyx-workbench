module ysyx_22040088_IFU(
    input       clk,
    input       rst,
	input       ena,
	input [63:0] branchpc,
	input       branch,
    output [63:0] pc,
	output [31:0] inst,
	output        if_stall,
	// ICache与内存接口
	output			icache_rd_req,
	output [ 3:0]   icache_rd_wstrb,
	output [63:0]	icache_rd_addr,
	input  [63:0]	icache_ret_data
);

wire [63:0]nextpc;
wire [63:0]addpc;

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.wen    (ena && addr_ok || branch),
	.pc_src (nextpc ),
	.pc_out (pc     )
);

assign addpc = pc + 4;

// 选择nextpc
assign nextpc = rst    ? 64'h80000000 :
		        branch ? branchpc :
				         addpc;

// ICache
wire [ 5:0]   index;
wire [22:0]   tag;
wire [ 2:0]   off;
wire addr_ok, data_ok;  // 握手信号
wire [31:0] icache_rdata;
wire valid;
assign off = nextpc[2:0];
assign index = nextpc[8:3];
assign tag = nextpc[31:9];
assign valid = addr_ok;  // 只有跳转之后才发出icache读请求

assign inst = icache_rdata;

icache icache(
	.clk      (clk      ),
	.rst      (rst || branch  ),
	.valid    (valid    ),
	.index    (index    ),
	.tag      (tag      ),
	.offset   (off      ),
	.addr_ok  (addr_ok  ),
	.data_ok  (data_ok  ),
	.rdata    (icache_rdata    ),
	.rd_req   (icache_rd_req   ),
	.rd_wstrb (icache_rd_wstrb ),
	.rd_addr  (icache_rd_addr  ),
	.ret_data (icache_ret_data )
);

assign if_stall = ~data_ok;

endmodule
