module ysyx_22040088_controlunit(
    input   [ 6:0] opcode,
    input   [ 2:0] funct3,
    input   [ 6:0] funct7,
    output  [10:0] alu_op,
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
wire inst_add;
wire inst_sub;
wire inst_or;
wire inst_slt;
wire inst_sltu;
wire inst_and;
wire inst_xor;
wire inst_sll;
wire inst_srl;
wire inst_sra;
wire inst_beq;

// 指令译码
assign inst_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
assign inst_lui = (opcode == 7'b0110111);
assign inst_auipc = (opcode == 7'b0010111);
assign inst_jal = (opcode == 7'b1101111);
assign inst_jalr = (opcode == 7'b1100111) && (funct3 == 3'b000);
assign inst_sd = (opcode == 7'b0100011) &&(funct3 == 3'b011);
assign inst_add = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0000000);
assign inst_sub = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0100000);
assign inst_or = (opcode == 7'b0110011) && (funct3 == 3'b110) && (funct7 == 7'b0000000);
assign inst_slt = (opcode == 7'b0110011) && (funct3 == 3'b010) && (funct7 == 7'b0000000);
assign inst_sltu = (opcode == 7'b0110011) && (funct3 == 3'b011) && (funct7 == 7'b0000000);
assign inst_and = (opcode == 7'b0110011) && (funct3 == 3'b111) && (funct7 == 7'b0000000);
assign inst_xor = (opcode == 7'b0110011) && (funct3 == 3'b100) && (funct7 == 7'b0000000);
assign inst_sll = (opcode == 7'b0110011) && (funct3 == 3'b001) && (funct7 == 7'b0000000);
assign inst_srl = (opcode == 7'b0110011) && (funct3 == 3'b101) && (funct7 == 7'b0000000);
assign inst_sra = (opcode == 7'b0110011) && (funct3 == 3'b101) && (funct7 == 7'b0100000);
assign inst_beq = (opcode == 7'b1100011) && (funct3 == 3'b000);


// 指令类型
wire r_type;
assign r_type = inst_add | inst_sub | inst_or | inst_slt | inst_sltu | inst_and | inst_xor
            | inst_sll | inst_srl | inst_sra;

// 控制信号生成
assign alu_op = {inst_lui, inst_sra, inst_srl, inst_sll, inst_xor, inst_or,
                inst_and, inst_sltu, inst_slt, inst_sub,
                inst_add | inst_addi | inst_auipc | inst_jal | inst_jalr};
assign rf_we =  inst_addi | inst_jal | inst_jalr | inst_lui | inst_auipc | r_type;
assign sel_alusrc1 = {inst_auipc | inst_jal | inst_jalr,
                      inst_addi | r_type};
assign sel_alusrc2 = {inst_jal | inst_jalr,
                      inst_auipc | inst_lui,
                      inst_addi,
                      r_type};
assign sel_nextpc = {inst_jalr,
                     inst_jal,
                     inst_addi | inst_auipc | inst_lui | inst_sd | r_type};

endmodule
