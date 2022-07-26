module ysyx_22040088_EXU(
    // input       clk,
    // input       rst,
    // 控制信号
    input [16:0] alu_op,
    input [63:0] alu_src1,
    input [63:0] alu_src2,
    input [ 3:0] sel_alures,
    // 输出信号
    output [63:0] alu_result
);

wire [63:0] alu_res;
ysyx_22040088_ALU u_ysyx_22040088_ALU(
    .alu_control (alu_op ),
    .alu_src1    (alu_src1    ),
    .alu_src2    (alu_src2    ),
    .alu_result  (alu_res     )
);

// 选择ALU结果
assign alu_result = sel_alures[0] ? alu_res :
                    sel_alures[1] ? {{32{alu_res[31]}}, alu_res[31:0]} :
                    sel_alures[2] ? {{32{alu_res[63]}}, alu_res[63:32]} :
                    sel_alures[3] ? {32'b0, alu_res[63:32]} :
                                    alu_res;

endmodule
