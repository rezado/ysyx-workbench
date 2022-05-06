module ysyx_22040088_controlunit(
    input   [ 6:0] opcode,
    input   [ 2:0] funct3,
    // input   [ 6:0] funct7,
    output  [11:0] alu_op,
    output         rf_we
);
// 指令
wire inst_addi;

// 指令译码
assign inst_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);

// 控制信号生成
assign alu_op = {11'b0, inst_addi};
assign rf_we = inst_addi;

endmodule
