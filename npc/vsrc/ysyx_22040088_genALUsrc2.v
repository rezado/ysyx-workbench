module ysyx_22040088_genALUsrc2(
    input   [63:0] rdata2,
    input   [63:0] immI,
    input   [63:0] immU,
    input   [ 3:0] sel_alusrc2,
    output  [63:0] alu_src2
);

MuxKeyWithDefault #(4, 4, 64) u_MuxKeyWithDefault(
    .out         (alu_src2         ),
    .key         (sel_alusrc2      ),
    .default_out (64'b0 ),
    .lut         ({
        4'b0001, rdata2,
        4'b0010, immI,
        4'b0100, immU,
        4'b1000, 64'd4
    })
);


endmodule
