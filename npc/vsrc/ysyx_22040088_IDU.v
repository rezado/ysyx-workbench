module ysyx_22040088_IDU(
    input       clk,
    input       rst,
    input [63:0] pc,
    input [31:0] inst,
    input [63:0] rf_wdata,
    input [ 4:0] rf_waddr_i,
    input        rf_we_i,

    // 数据前递
    input        ex_load,
    input        mem_load,
    // 来自ex阶段
    input              ex_rf_we,
    input       [ 4:0] ex_rf_waddr,
    input       [63:0] ex_alu_result,
    // 来自mem阶段
    input              mem_rf_we,
    input       [ 4:0] mem_rf_waddr,
    input       [63:0] mem_alu_result,
    input              mtcmp_we,
    input              mtcmp_re,
    input       [63:0] mtcmp_wdata,
    
    // 控制信号
    output [16:0] alu_op,
    output [ 2:0] sel_rfres,
    output        mem_wen,
    output        mem_ena,
    output [ 3:0] mem_mask,
    output        inv,
    output [ 3:0] sel_alures,
    output [ 1:0] sel_memdata,
    output        rf_we_o,
    output [ 4:0] rf_waddr_o,
    output        load,
    output        branch,
    output        stall,
    output        ebreak,
    
    // EXE源操作数
    output [63:0] alu_src1,
    output [63:0] alu_src2,
    output [63:0] rf_rdata2,
    output [63:0] branchpc,

    // 写回寄存器
    output [63:0] csr_data
);

// 指令分割
wire [4:0] rd;
wire [4:0] rs1;
wire [4:0] rs2;
wire [11:0] immI;
wire [20:0] immJ;
wire [19:0] immU;
wire [12:0] immB;
wire [11:0] immS;

assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];
assign immI = inst[31:20];
assign immJ = {inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
assign immU = inst[31:12];
assign immB = {inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
assign immS = {inst[31:25], inst[11:7]};
assign rf_waddr_o = rd;

// Debug
// always@(posedge clk) begin
//     $display("ID:");
//     $display(inst);
// end

// 控制单元
wire [3:0]sel_alusrc1;
wire [6:0]sel_alusrc2;
wire [6:0]sel_btype;
wire      rf_re1, rf_re2;
wire      csr_re, csr_we;
wire [5:0]sel_csrres;
wire ecall, mret;

ysyx_22040088_controlunit u_ysyx_22040088_controlunit(
    .inst        (inst        ),
    .alu_op      (alu_op      ),
    .rf_we       (rf_we_o     ),
    .sel_alusrc1 (sel_alusrc1 ),
    .sel_alusrc2 (sel_alusrc2 ),
    .sel_btype   (sel_btype   ),
    .sel_rfres   (sel_rfres   ),
    .mem_ena     (mem_ena     ),
    .mem_wen     (mem_wen     ),
    .mem_mask    (mem_mask    ),
    .inv         (inv         ),
    .sel_alures  (sel_alures  ),
    .sel_memdata (sel_memdata ),
    .load        (load        ),
    .rf_re1      (rf_re1      ),
    .rf_re2      (rf_re2      ),
    .csr_re      (csr_re      ),
    .csr_we      (csr_we      ),
    .sel_csrres  (sel_csrres  ),
    .ebreak      (ebreak      ),
    .ecall       (ecall       ),
    .mret        (mret        )
);

wire [63:0] rf_rdata1;
wire [63:0] rf_port1, rf_port2;

ysyx_22040088_regfile u_ysyx_22040088_regfile(
    .clk    (clk    ),
    .wdata  (rf_wdata ),
    .waddr  (rf_waddr_i  ),
    .wen    (rf_we_i    ),
    .raddr1 (rs1),
    .raddr2 (rs2 ),
    .rdata1 (rf_port1 ),
    .rdata2 (rf_port2 )
);

// 立即数符号扩展
/* verilator lint_off UNUSED */
wire [63:0] immI_sext, immJ_sext, immU_sext, immB_sext, immS_sext;
ysyx_22040088_signext#(12, 64) u_ysyx_22040088_signext1(
    .in  (immI      ),
    .out (immI_sext )
);

ysyx_22040088_signext#(21, 64) u_ysyx_22040088_signext2(
    .in  (immJ  ),
    .out (immJ_sext )
);

assign immU_sext = {{32{immU[19]}}, immU, 12'b0};

ysyx_22040088_signext#(13, 64) u_ysyx_22040088_signext4(
    .in  (immB  ),
    .out (immB_sext )
);

ysyx_22040088_signext#(12, 64) u_ysyx_22040088_signext5(
    .in  (immS  ),
    .out (immS_sext )
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
    .immS        (immS_sext   ),
    .sel_alusrc2 (sel_alusrc2 ),
    .alu_src2    (alu_src2    )
);

// 计算Branch需要的条件
wire zero, lt, ltu;
wire [63:0] sub_result;
wire cout;
assign {cout, sub_result} = {1'b0, rf_rdata1} + {1'b0, ~rf_rdata2} + 65'b1;
assign zero = (sub_result == 64'b0);  // 比较器
assign lt = (rf_rdata1[63] & ~rf_rdata2[63])
          | (~(rf_rdata1[63] ^ rf_rdata2[63]) & sub_result[63]);
assign ltu = ~cout;

// 生成跳转和分支的地址
wire [63:0] jalrpc, bpc;
assign jalrpc = (rf_rdata1 + immI_sext) & ~64'b1;
assign bpc = pc + immB_sext;
assign branch = sel_btype[0] ? 1'b1 :
                sel_btype[1] ? zero :
                sel_btype[2] ? ~zero :
                sel_btype[3] ? lt :
                sel_btype[4] ? ltu :
                sel_btype[5] ? ~lt :
                sel_btype[6] ? ~ltu :
                (ecall || mret || tint) ? 1'b1 :
                               1'b0;

// 根据条件选择
wire        tint;  // timer interrupt
assign branchpc= branch ? ((ecall || mret || tint) ? csr_rdata :
                           sel_btype[0] ? jalrpc :
                                          bpc) :
                          64'b0;

// 判断流水线暂停
assign stall = (ex_rf_we && ex_load && ex_rf_waddr == rs1 && rf_re1 && rs1 != 0) ||
               (ex_rf_we && ex_load && ex_rf_waddr == rs2 && rf_re2 && rs2 != 0) ||
               (mem_rf_we && mem_load && mem_rf_waddr == rs1 && rf_re1 && rs1 != 0) ||
               (mem_rf_we && mem_load && mem_rf_waddr == rs2 && rf_re2 && rs2 != 0);

// 数据前递
wire ForwardA, ForwardB;
wire [63:0] ForA_data, ForB_data;
forwarding u_forwarding(
    .raddr1         (rs1            ),
    .raddr2         (rs2            ),
    .re1            (rf_re1         ),
    .re2            (rf_re2         ),
    .ex_we          (ex_rf_we       ),
    .ex_load        (ex_load        ),
    .ex_waddr       (ex_rf_waddr    ),
    .ex_alu_result  (ex_alu_result  ),
    .mem_we         (mem_rf_we      ),
    .mem_load       (mem_load       ),
    .mem_waddr      (mem_rf_waddr   ),
    .mem_alu_result (mem_alu_result ),
    .wb_we          (rf_we_i        ),
    .wb_waddr       (rf_waddr_i     ),
    .wb_wdata       (rf_wdata       ),
    .ForwardA       (ForwardA       ),
    .ForwardB       (ForwardB       ),
    .ASrc           (ForA_data      ),
    .BSrc           (ForB_data      )
);

// 选择regfile读端口数据
assign rf_rdata1 = ForwardA ? ForA_data : rf_port1;
assign rf_rdata2 = ForwardB ? ForB_data : rf_port2;

// 选择CSR写数据
wire [63:0] csr_wdata;
wire [63:0] zimm;
ysyx_22040088_zeroext#(5, 64) u_ysyx_22040088_zeroext(
    .in  (inst[19:15]),
    .out (zimm)
);

assign csr_wdata = sel_csrres[0] ? rf_rdata1 :
                   sel_csrres[1] ? csr_rdata | rf_rdata1 :
                   sel_csrres[2] ? csr_rdata & ~rf_rdata1 :
                   sel_csrres[3] ? zimm :
                   sel_csrres[4] ? csr_rdata | zimm :
                   sel_csrres[5] ? csr_rdata & ~zimm :
                   ecall         ? 64'hb :
                                   64'b0;
// CSR寄存器
wire [63:0] csr_rdata;
wire        tint_ena;
assign tint_ena = ~(rst || stall);
CSRs u_CSRs(
    .clk       (clk       ),
    .rst       (rst       ),
    .csr_id    (immI      ),
    .csr_re    (csr_re    ),
    .csr_we    (csr_we    ),
    .mret      (mret      ),
    .ecall     (ecall     ),
    .epc       (pc        ),
    .tint_ena  (tint_ena  ),
    .mtcmp_we    (mtcmp_we    ),
    .mtcmp_re    (mtcmp_re    ),
    .mtcmp_wdata (mtcmp_wdata ),
    .csr_wdata (csr_wdata ),
    .csr_rdata (csr_rdata ),
    .tint      (tint      )
);

assign csr_data = csr_re || mtcmp_re ? csr_rdata : 64'b0;


endmodule
