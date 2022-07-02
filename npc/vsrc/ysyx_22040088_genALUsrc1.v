module ysyx_22040088_genALUsrc1(
    input   [63:0] rdata1,
    input   [63:0] pc,
    input   [ 2:0] sel_alusrc1,
    output  [63:0] alu_src1
);

MuxKeyWithDefault #(3, 3, 64) u_MuxKeyWithDefault(
    .out         (alu_src1         ),
    .key         (sel_alusrc1      ),
    .default_out (64'b0 ),
    .lut         ({
        3'b001, rdata1,
        3'b010, pc,
        3'b100, {32'b0, rdata1[31:0]}
    })
);


endmodule
