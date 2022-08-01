// PC寄存器
module ysyx_22040088_pc(
    input              clk,
    input              rst,
    input       [63:0] pc_src,
    output reg  [63:0] pc_out
);

ysyx_22040088_Reg #(64, 64'h80000000) pc_Reg(
    .clk(clk),
    .rst(rst),
    .din(pc_src),
    .dout(pc_out),
    .wen(1'b1)
);

endmodule
