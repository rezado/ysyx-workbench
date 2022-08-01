module ysyx_22040088_IDU(
    input       clk,
    input       rst,
    input [63:0] pc,
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
    
    // 指令
    output [31:0] inst,
    
    // 控制信号
    output [16:0] alu_op,
    output [ 1:0] sel_rfres,
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
    
    // EXE源操作数
    output [63:0] alu_src1,
    output [63:0] alu_src2,
    output [63:0] rf_rdata2,
    output        sys,
    output [63:0] branchpc
);

import "DPI-C" function void npc_read(
  input longint raddr, output longint rdata);
wire [63:0] inst_data;

always @(posedge clk) begin
	if (!rst) begin
		// $display("%x", pc);
		npc_read(pc, inst_data);
	end
end

assign inst = (pc[2:0] == 3'b000) ? inst_data[31:0] :
			  (pc[2:0] == 3'b100) ? inst_data[63:32] :
			  						32'b0;

assign sys = (inst == 32'b000000000001_00000_000_00000_1110011);

// 指令分割
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [4:0] rd;
wire [4:0] rs1;
wire [4:0] rs2;
wire [11:0] immI;
wire [20:0] immJ;
wire [19:0] immU;
wire [12:0] immB;
wire [11:0] immS;

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

ysyx_22040088_controlunit u_ysyx_22040088_controlunit(
    .opcode      (opcode      ),
    .funct3      (funct3      ),
    .funct7      (funct7      ),
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
    .rf_re2      (rf_re2      )
);

wire [63:0] rf_rdata1;
wire [63:0] rf_port1, rf_port2;

ysyx_22040088_regfile u_ysyx_22040088_regfile(
    .clk    (clk    ),
    .wdata  (rf_wdata ),
    .waddr  (rf_waddr_i  ),
    .wen    (rf_we_i    ),
    .raddr1 (rs1 ),
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
/* verilator lint_off WIDTH */
assign {cout, sub_result} = rf_rdata1 + ~rf_rdata2 + {{63{1'b0}}, 1'b1};
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
                               1'b0;

// 根据条件选择
assign branchpc= branch ? (sel_btype[0] ? jalrpc : bpc) :
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


endmodule
