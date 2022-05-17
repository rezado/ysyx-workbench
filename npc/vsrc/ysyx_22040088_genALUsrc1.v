module ysyx_22040088_genALUsrc1(
    input   [63:0] rdata1,
    input   [63:0] pc,
    input   [ 1:0] sel_alusrc1,
    output  [63:0] alu_src1
);

MuxKeyWithDefault #(2, 2, 64) u_MuxKeyWithDefault(
    .out         (alu_src1         ),
    .key         (sel_alusrc1      ),
    .default_out (64'b0 ),
    .lut         ({
        2'b01, rdata1,
        2'b10, pc
    })
);


endmodule
