module ysyx_22040088_EXU(
    // input       clk,
    // input       rst,
    // 控制信号
    input [10:0] alu_op,

    // 源操作数
    input [63:0] alu_src1,
    input [63:0] alu_src2,
    
    output [63:0] alu_result
);

ysyx_22040088_ALU u_ysyx_22040088_ALU(
    .alu_control (alu_op ),
    .alu_src1    (alu_src1    ),
    .alu_src2    (alu_src2    ),
    .alu_result  (alu_result  )
);


endmodule
