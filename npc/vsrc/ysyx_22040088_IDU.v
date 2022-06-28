module ysyx_22040088_IDU(
    input       clk,
    // input       rst,
    input [63:0] pc,
    input [31:0] inst,
    input [63:0] rf_wdata,
    // 控制信号
    output [11:0] alu_op,
    
    //寄存器
    output [63:0] alu_src1,
    output [63:0] alu_src2,

    // PC跳转
    output [63:0] nextpc
);

// 指令分割
wire [6:0] opcode;
wire [2:0] funct3;
// wire [6:0] funct7;
wire [4:0] rd;
wire [4:0] rs1;
wire [4:0] rs2;
wire [11:0] immI;
wire [20:0] immJ;
wire [19:0] immU;

assign opcode = inst[6:0];
assign funct3 = inst[14:12];
// assign funct7 = inst[31:25];
assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];
assign immI = inst[31:20];
assign immJ = {inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
assign immU = inst[31:12];

// 立即数符号扩展
wire [63:0] immI_sext;
wire [63:0] immU_sext;
wire [63:0] immJ_sext;
ysyx_22040088_signext#(12, 64) u_ysyx_22040088_signext1(
    .in  (immI      ),
    .out (immI_sext )
);

ysyx_22040088_signext#(21, 64) u_ysyx_22040088_signext2(
    .in  (immJ  ),
    .out (immJ_sext )
);

ysyx_22040088_signext#(20, 64) u_ysyx_22040088_signext3(
    .in  (immU  ),
    .out (immU_sext )
);


wire rf_we;
wire [1:0] sel_alusrc1;
wire [3:0] sel_alusrc2;
wire [2:0] sel_nextpc;
ysyx_22040088_controlunit u_ysyx_22040088_controlunit(
    .opcode      (opcode      ),
    .funct3      (funct3      ),
    .alu_op      (alu_op      ),
    .rf_we       (rf_we       ),
    .sel_alusrc1 (sel_alusrc1 ),
    .sel_alusrc2 (sel_alusrc2 ),
    .sel_nextpc  (sel_nextpc  )
);

/* verilator lint_off UNUSED */
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

// alu源操作数生成逻辑
ysyx_22040088_genALUsrc1 u_ysyx_22040088_genALUsrc1(
    .rdata1      (rf_rdata1      ),
    .pc          (pc          ),
    .sel_alusrc1 (sel_alusrc1 ),
    .alu_src1    (alu_src1    )
);

ysyx_22040088_genALUsrc2 u_ysyx_22040088_genALUsrc2(
    .rdata2      (rf_rdata2   ),
    .immI        (immI_sext   ),
    .immU        (immU_sext   ),
    .sel_alusrc2 (sel_alusrc2 ),
    .alu_src2    (alu_src2    )
);

// PC跳转
wire [63:0] pcadd, jalpc, jalrpc;
ysyx_22040088_pcbranch u_ysyx_22040088_pcbranch(
    .pc     (pc     ),
    .immI   (immI_sext   ),
    .immJ   (immJ_sext   ),
    .rdata1 (rf_rdata1 ),
    .pcadd  (pcadd  ),
    .jalpc  (jalpc  ),
    .jalrpc (jalrpc )
);

ysyx_22040088_gennextpc u_ysyx_22040088_gennextpc(
    .pcadd      (pcadd      ),
    .jalpc      (jalpc      ),
    .jalrpc     (jalrpc      ),
    .sel_nextpc (sel_nextpc ),
    .nextpc     (nextpc     )
);



endmodule
