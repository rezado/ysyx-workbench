// PC寄存器
module ysyx_22040088_pc(
    input              clk,
    input              rst,
    input              wen,
    input       [63:0] pc_src,
    output reg  [63:0] pc_out
);

Reg #(64, 64'h7ffffffc) pc_Reg(
    .clk(clk),
    .rst(rst),
    .din(pc_src),
    .dout(pc_out),
    .wen(wen)
);

endmodule
