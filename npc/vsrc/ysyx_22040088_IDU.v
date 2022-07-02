module ysyx_22040088_IDU(
    input       clk,
    // input       rst,
    input [31:0] inst,
    input [63:0] rf_wdata,
    // 控制信号
    output [12:0] alu_op,
    output [ 6:0] sel_nextpc,
    output [ 2:0] sel_alusrc1,
    output [ 5:0] sel_alusrc2,
    output [ 2:0] sel_rfres,
    output        mem_wen,
    output        mem_ena,
    output [ 3:0] mem_mask,
    output        inv,
    output [ 1:0] sel_alures,
    
    // 寄存器 立即数
    output [63:0] rf_rdata1,
    output [63:0] rf_rdata2,
    output [11:0] immI,
    output [20:0] immJ,
    output [19:0] immU,
    output [12:0] immB,
    output [11:0] immS
);

// 指令分割
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [4:0] rd;
wire [4:0] rs1;
wire [4:0] rs2;

assign opcode = inst[6:0];
assign funct3 = inst[14:12];
assign funct7 = inst[31:25];
assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];
assign immI = inst[31:20];
assign immJ = {inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
assign immU = inst[31:12];
assign immB = {inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
assign immS = {inst[31:25], inst[11:7]};

wire rf_we;

// Debug
// always@(posedge clk) begin
//     $display("ID:");
//     $display(inst);
// end

ysyx_22040088_controlunit u_ysyx_22040088_controlunit(
    .opcode      (opcode      ),
    .funct3      (funct3      ),
    .funct7      (funct7      ),
    .alu_op      (alu_op      ),
    .rf_we       (rf_we       ),
    .sel_alusrc1 (sel_alusrc1 ),
    .sel_alusrc2 (sel_alusrc2 ),
    .sel_nextpc  (sel_nextpc  ),
    .sel_rfres   (sel_rfres   ),
    .mem_ena     (mem_ena     ),
    .mem_wen     (mem_wen     ),
    .mem_mask    (mem_mask    ),
    .inv         (inv         ),
    .sel_alures  (sel_alures  )
);



ysyx_22040088_regfile u_ysyx_22040088_regfile(
    .clk    (clk    ),
    .wdata  (rf_wdata  ),
    .waddr  (rd  ),
    .wen    (rf_we    ),
    .raddr1 (rs1 ),
    .raddr2 (rs2 ),
    .rdata1 (rf_rdata1 ),
    .rdata2 (rf_rdata2 )
);

endmodule
