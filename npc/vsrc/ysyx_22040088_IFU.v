module ysyx_22040088_IFU(
    input       clk,
    input       rst,
	input [63:0] branchpc,
	input       branch,
    output [63:0] pc
);
wire [63:0]nextpc;
wire [63:0]addpc;

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.pc_src (nextpc ),
	.pc_out (pc     )
);

assign addpc = pc + 4;

// 选择nextpc
assign nextpc = rst    ? 64'h80000000 :
		        branch ? branchpc :
						 addpc;

endmodule
