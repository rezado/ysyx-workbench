module ysyx_22040088_EXU(
    // input       clk,
    // input       rst,
    input [63:0] pc,
    // 控制信号
    input [10:0] alu_op,
    input [ 3:0] sel_nextpc,
    input [ 1:0] sel_alusrc1,
    input [ 3:0] sel_alusrc2,

    // 寄存器 立即数
    input [63:0] rf_rdata1,
    input [63:0] rf_rdata2,
    input [11:0] immI,
    input [20:0] immJ,
    input [19:0] immU,
    input [12:0] immB,
    
    output [63:0] alu_result,
    output [63:0] nextpc
);

wire [63:0] immI_sext, immJ_sext, immU_sext, immB_sext;
// 立即数符号扩展
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

ysyx_22040088_signext#(13, 64) u_ysyx_22040088_signext4(
    .in  (immB  ),
    .out (immB_sext )
);


// alu源操作数生成逻辑
wire [63:0] alu_src1, alu_src2;
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

ysyx_22040088_ALU u_ysyx_22040088_ALU(
    .alu_control (alu_op ),
    .alu_src1    (alu_src1    ),
    .alu_src2    (alu_src2    ),
    .alu_result  (alu_result  )
);

// PC跳转
wire [63:0] pcadd, jalpc, jalrpc, beqpc;
ysyx_22040088_pcbranch u_ysyx_22040088_pcbranch(
    .pc         (pc         ),
    .immI       (immI_sext  ),
    .immJ       (immJ_sext  ),
    .rdata1     (rf_rdata1  ),
    .alu_result (alu_result ),
    .immB       (immB_sext  ),
    .pcadd      (pcadd      ),
    .jalpc      (jalpc      ),
    .jalrpc     (jalrpc     ),
    .beqpc      (beqpc      )
);


ysyx_22040088_gennextpc u_ysyx_22040088_gennextpc(
    .pcadd      (pcadd      ),
    .jalpc      (jalpc      ),
    .jalrpc     (jalrpc     ),
    .beqpc      (beqpc      ),
    .sel_nextpc (sel_nextpc ),
    .nextpc     (nextpc     )
);


endmodule
