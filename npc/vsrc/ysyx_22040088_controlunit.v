module ysyx_22040088_controlunit(
    input   [ 6:0] opcode,
    input   [ 2:0] funct3,
    input   [ 6:0] funct7,
    output  [13:0] alu_op,
    output         rf_we,
    output  [ 2:0] sel_alusrc1,
    output  [ 6:0] sel_alusrc2,
    output  [ 6:0] sel_nextpc,
    output  [ 2:0] sel_rfres,
    output         mem_ena,
    output         mem_wen,
    output  [ 3:0] mem_mask,
    output         inv,
    output  [ 1:0] sel_alures
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

wire inst_lw;
wire inst_sw;
wire inst_lh;
wire inst_sh;
wire inst_lb;
wire inst_sb;
wire inst_lwu;
wire inst_lhu;
wire inst_lbu;

wire inst_addw;
wire inst_sltiu;
wire inst_andi;
wire inst_addiw;
wire inst_srai;
wire inst_slli;
wire inst_srli;

wire inst_mulw;
wire inst_divw;
wire inst_remw;
wire inst_subw;
wire inst_sllw;
wire inst_xori;

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
assign inst_bltu = (opcode == 7'b1100011) && (funct3 == 3'b110);
assign inst_bge = (opcode == 7'b1100011) && (funct3 == 3'b101);
assign inst_bgeu = (opcode == 7'b1100011) && (funct3 == 3'b111);
assign inst_ld = (opcode == 7'b0000011) && (funct3 == 3'b011);
assign inst_sd = (opcode == 7'b0100011) && (funct3 == 3'b011);

assign inst_lw = (opcode == 7'b0000011) && (funct3 == 3'b010);
assign inst_sw = (opcode == 7'b0100011) && (funct3 == 3'b010);
assign inst_lh = (opcode == 7'b0000011) && (funct3 == 3'b001);
assign inst_sh = (opcode == 7'b0100011) && (funct3 == 3'b001);
assign inst_lb = (opcode == 7'b0000011) && (funct3 == 3'b000);
assign inst_sb = (opcode == 7'b0100011) && (funct3 == 3'b000);
assign inst_lwu = (opcode == 7'b0000011) && (funct3 == 3'b110);
assign inst_lhu = (opcode == 7'b0000011) && (funct3 == 3'b101);
assign inst_lbu = (opcode == 7'b0000011) && (funct3 == 3'b100);

assign inst_addw = (opcode == 7'b0111011) && (funct3 == 3'b000) && (funct7 == 7'b0000000);
assign inst_sltiu = (opcode == 7'b0010011) && (funct3 == 3'b011);
assign inst_andi = (opcode == 7'b0010011) && (funct3 == 3'b111);
assign inst_addiw = (opcode == 7'b0011011) && (funct3 == 3'b000);
assign inst_srai = (opcode == 7'b0010011) && (funct3 == 3'b101) && (funct7 == 7'b0100000);
assign inst_slli = (opcode == 7'b0010011) && (funct3 == 3'b001) && (funct7[6:1] == 6'b000000);
assign inst_srli = (opcode == 7'b0010011) && (funct3 == 3'b101) && (funct7[6:1] == 6'b000000);
assign inst_mulw = (opcode == 7'b0111011) && (funct3 == 3'b000) && (funct7 == 7'b0000001);
assign inst_divw = (opcode == 7'b0111011) && (funct3 == 3'b100) && (funct7 == 7'b0000001);
assign inst_remw = (opcode == 7'b0111011) && (funct3 == 3'b110) && (funct7 == 7'b0000001);
assign inst_subw = (opcode == 7'b0111011) && (funct3 == 3'b000) && (funct7 == 7'b0100000);
assign inst_sllw = (opcode == 7'b0111011) && (funct3 == 3'b001) && (funct7 == 7'b0000000);
assign inst_xori = (opcode == 7'b0010011) && (funct3 == 3'b100);

// TODO:每次添加指令这里都要修改
assign inv = ~(inst_addi | inst_lui | inst_auipc | inst_jal | inst_jalr | inst_sd | inst_add | inst_sub | inst_or | inst_slt | inst_sltu | inst_and | inst_xor | inst_sll | inst_srl | inst_sra |
               inst_beq | inst_bne | inst_blt | inst_bltu | inst_bge | inst_bgeu | load | store | inst_add |
               inst_addw | inst_sltiu | inst_andi |inst_addiw | inst_srai | inst_slli | inst_srli | inst_mulw |
               inst_divw | inst_remw | inst_subw | inst_sllw | inst_xori);

// 指令类型
wire r_type, b_type;
// divw remw sllw因源操作数特殊性不加入r_type
assign r_type = inst_add | inst_sub | inst_or | inst_slt | inst_sltu | inst_and | inst_xor
            | inst_sll | inst_srl | inst_sra | inst_addw | inst_mulw | inst_subw;
assign b_type = inst_beq | inst_bne | inst_bge | inst_bgeu | inst_blt | inst_bltu;

wire load, store;
assign load = inst_ld | inst_lw | inst_lh | inst_lb | inst_lwu | inst_lhu | inst_lbu;
assign store = inst_sd | inst_sw | inst_sh | inst_sb;

wire word;
assign word = inst_addw | inst_addiw | inst_lbu | inst_lhu | inst_lwu | inst_mulw | inst_divw | inst_remw | inst_subw;

// 控制信号生成
assign alu_op = {inst_remw,
                inst_divw,
                inst_mulw,
                inst_lui,
                inst_sra | inst_srai,
                inst_srl | inst_srli,
                inst_sll | inst_slli | inst_sllw,
                inst_xor | inst_xori,
                inst_or,
                inst_and | inst_andi,
                inst_sltu | inst_bltu | inst_bgeu | inst_sltiu,
                inst_slt | inst_blt | inst_bge,
                inst_sub | inst_beq | inst_bne | inst_subw,
                inst_add | inst_addi | inst_auipc | inst_jal | inst_jalr | load | store | inst_addw | inst_addiw};
assign rf_we =  inst_addi | inst_jal | inst_jalr | inst_lui | inst_auipc |
                r_type | load | inst_sltiu | inst_andi | inst_addiw |
                inst_srai | inst_slli | inst_srli | inst_divw | inst_remw |
                inst_sllw | inst_xori;
assign sel_alusrc1 = {inst_divw | inst_remw, //zext(rdata1[31:0])
                      inst_auipc | inst_jal | inst_jalr,  // pc
                      inst_addi | r_type | b_type | load | store |
                      inst_andi | inst_addiw | inst_srai | inst_slli |
                      inst_srli | inst_sltiu | inst_sllw | inst_xori};  // rdata1
assign sel_alusrc2 = {inst_sllw, //zext(rdata2[4:0])
                      inst_divw | inst_remw,
                      store,  // immS
                      inst_jal | inst_jalr,  // 4
                      inst_auipc | inst_lui,  // immU
                      inst_addi | load | inst_sltiu | inst_andi | inst_addiw | inst_srai |
                      inst_slli | inst_srli | inst_xori, // immI
                      r_type | b_type};  // rdata2
assign sel_nextpc = {inst_bge | inst_bgeu,
                     inst_blt | inst_bltu,
                     inst_bne,
                     inst_beq,
                     inst_jalr,
                     inst_jal,
                     inst_addi | inst_auipc | inst_lui | r_type | load | store |
                     inst_sltiu | inst_andi | inst_addiw | inst_srai | inst_slli | inst_srli |
                     inst_divw | inst_remw | inst_sllw | inst_xori};
assign sel_rfres = {inst_lwu | inst_lhu | inst_lbu
                    , inst_ld | inst_lw | inst_lh | inst_lb
                    , ~load};
assign mem_ena = load | store;
assign mem_wen = store;
assign mem_mask = inst_ld | inst_sd ? 4'b0001 :
                  inst_lw | inst_sw | inst_lwu ? 4'b0010 :
                  inst_lh | inst_sh | inst_lhu ? 4'b0100 :
                  inst_lb | inst_sb | inst_lbu ? 4'b1000 :
                                      4'b0000;

assign sel_alures = {word
                    , ~word};

endmodule
