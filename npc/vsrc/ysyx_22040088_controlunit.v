module ysyx_22040088_controlunit(
    input   [ 6:0] opcode,
    input   [ 2:0] funct3,
    // input   [ 6:0] funct7,
    output  [11:0] alu_op,
    output         rf_we,
    output  [ 1:0] sel_alusrc1,
    output  [ 3:0] sel_alusrc2,
    output  [ 2:0] sel_nextpc
);
// 指令
wire inst_addi;
wire inst_lui;
wire inst_auipc;
wire inst_jal;
wire inst_jalr;
wire inst_sd;

// 指令译码
assign inst_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
assign inst_lui = (opcode == 7'b0110111);
assign inst_auipc = (opcode == 7'b0010111);
assign inst_jal = (opcode == 7'b1101111);
assign inst_jalr = (opcode == 7'b1100111) && (funct3 == 3'b000);
assign inst_sd = (opcode == 7'b0100011) &&(funct3 == 3'b011);

// 控制信号生成
assign alu_op = {inst_lui, 10'b0, inst_addi | inst_auipc | inst_jal | inst_jalr};
assign rf_we = inst_addi | inst_jal | inst_jalr | inst_lui | inst_auipc;
assign sel_alusrc1 = {inst_auipc | inst_jal | inst_jalr,
                      inst_addi};
assign sel_alusrc2 = {inst_jal | inst_jalr,
                      inst_auipc | inst_lui,
                      inst_addi,
                      1'b0};
assign sel_nextpc = {inst_jalr,
                     inst_jal,
                     inst_addi | inst_auipc | inst_lui | inst_sd};

endmodule
