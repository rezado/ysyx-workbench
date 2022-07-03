module ysyx_22040088_genALUsrc1(
    input   [63:0] rdata1,
    input   [63:0] pc,
    input   [ 3:0] sel_alusrc1,
    output  [63:0] alu_src1
);

MuxKeyWithDefault #(4, 4, 64) u_MuxKeyWithDefault(
    .out         (alu_src1         ),
    .key         (sel_alusrc1      ),
    .default_out (64'b0 ),
    .lut         ({
        4'b0001, rdata1,
        4'b0010, pc,
        4'b0100, {32'b0, rdata1[31:0]},
        4'b1000, {{32{rdata1[31]}}, rdata1[31:0]}
    })
);


endmodule
