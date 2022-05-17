module ysyx_22040088_IFU(
    input       clk,
    input       rst,
    output [63:0] pc
);

// PC
wire [63:0] pc_add;

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.pc_src (pc_add ),
	.pc_out (pc     )
);

ysyx_22040088_pc_adder u_ysyx_22040088_pc_adder(
	.in  (pc  ),
	.out (pc_add )
);

endmodule
