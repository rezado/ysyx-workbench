module ysyx_22040088_genALUsrc2(
    input   [63:0] rdata2,
    input   [63:0] immI,
    input   [63:0] immU,
    input   [63:0] immS,
    input   [ 4:0] sel_alusrc2,
    output  [63:0] alu_src2
);

assign alu_src2 = ({64{sel_alusrc2[0]}} & rdata2)
                | ({64{sel_alusrc2[1]}} & immI)
                | ({64{sel_alusrc2[2]}} & immU)
                | ({64{sel_alusrc2[3]}} & 64'd4)
                | ({64{sel_alusrc2[4]}} & immS);

endmodule
