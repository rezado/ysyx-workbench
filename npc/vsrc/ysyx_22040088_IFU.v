module ysyx_22040088_IFU(
    input       clk,
    input       rst,
	input  [63:0] nextpc,
    output [63:0] pc
);

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.pc_src (nextpc ),
	.pc_out (pc     )
);


endmodule
