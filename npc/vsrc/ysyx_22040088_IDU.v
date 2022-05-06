module ysyx_22040088_IDU(
    input       clk,
    // input       rst,
    input [31:0] inst,
    input [63:0] rf_wdata,
    // 控制信号
    output [11:0] alu_op,
    
    //寄存器
    output [63:0] alu_src1,
    output [63:0] alu_src2
);

// 指令分割
wire [6:0] opcode;
wire [2:0] funct3;
// wire [6:0] funct7;
wire [4:0] rd;
wire [4:0] rs1;
wire [4:0] rs2;
wire [11:0] immI;

assign opcode = inst[6:0];
assign funct3 = inst[14:12];
// assign funct7 = inst[31:25];
assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];
assign immI = inst[31:20];

// 立即数符号扩展
wire [63:0] immI_sext;
ysyx_22040088_signext#(12, 64) u_ysyx_22040088_signext(
    .in  (immI      ),
    .out (immI_sext )
);


wire rf_we;
ysyx_22040088_controlunit u_ysyx_22040088_controlunit(
	.opcode (opcode ),
	.funct3 (funct3 ),
	// .funct7 (funct7 ),
	.alu_op (alu_op ),
	.rf_we  (rf_we  )
);

wire [63:0] rf_rdata1, rf_rdata2;
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

assign alu_src1 = rf_rdata1;
assign alu_src2 = immI_sext;


endmodule
