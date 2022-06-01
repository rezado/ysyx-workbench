module ysyx_22040088_controlunit(
    input   [ 6:0] opcode,
    input   [ 2:0] funct3,
    input   [ 6:0] funct7,
    output  [10:0] alu_op,
    output         rf_we,
    output  [ 1:0] sel_alusrc1,
    output  [ 4:0] sel_alusrc2,
    output  [ 6:0] sel_nextpc,
    output  [ 1:0] sel_rfres,
    output         mem_ena,
    output  [ 7:0] mem_wen
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
wire inst_bne;
wire inst_blt;
wire inst_bltu;
wire inst_bge;
wire inst_bgeu;
wire inst_ld;
wire inst_sd;

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
assign inst_bne = (opcode == 7'b1100011) && (funct3 == 3'b001);
assign inst_blt = (opcode == 7'b1100011) && (funct3 == 3'b100);
assign inst_bltu = (opcode == 7'b1100011) && (funct3 == 3'b101);
assign inst_bge = (opcode == 7'b1100011) && (funct3 == 3'b101);
assign inst_bgeu = (opcode == 7'b1100011) && (funct3 == 3'b111);
assign inst_ld = (opcode == 7'b0000011) && (funct3 == 3'b011);
assign inst_sd = (opcode == 7'b0100011) && (funct3 == 3'b011);

// 指令类型
wire r_type, b_type;
wire mem;
assign r_type = inst_add | inst_sub | inst_or | inst_slt | inst_sltu | inst_and | inst_xor
            | inst_sll | inst_srl | inst_sra;
assign b_type = inst_beq | inst_bne | inst_bge | inst_bgeu | inst_blt | inst_bltu;
assign mem = inst_ld | inst_sd;

// 控制信号生成
assign alu_op = {inst_lui, inst_sra, inst_srl, inst_sll, inst_xor, inst_or,
                inst_and,
                inst_sltu | inst_bltu | inst_bgeu,
                inst_slt | inst_blt | inst_bge,
                inst_sub | inst_beq | inst_bne,
                inst_add | inst_addi | inst_auipc | inst_jal | inst_jalr | mem};
assign rf_we =  inst_addi | inst_jal | inst_jalr | inst_lui | inst_auipc | r_type | inst_ld;
assign sel_alusrc1 = {inst_auipc | inst_jal | inst_jalr,  // pc
                      inst_addi | r_type | b_type | inst_ld | inst_sd};  // rdata1
assign sel_alusrc2 = {inst_sd,  // immS
                      inst_jal | inst_jalr,  // 4
                      inst_auipc | inst_lui,  // immU
                      inst_addi | inst_ld, // immI
                      r_type | b_type};  // rdata2
assign sel_nextpc = {inst_bge | inst_bgeu,
                     inst_blt | inst_bltu,
                     inst_bne,
                     inst_beq,
                     inst_jalr,
                     inst_jal,
                     inst_addi | inst_auipc | inst_lui | inst_sd | r_type | inst_ld | inst_sd};
assign sel_rfres = {inst_ld, ~inst_ld};
assign mem_ena = mem;
assign mem_wen = {inst_sd, inst_sd, inst_sd, inst_sd, inst_sd, inst_sd, inst_sd, inst_sd};

endmodule
