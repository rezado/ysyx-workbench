module ysyx_22040088_gennextpc(
    input   [63:0] pcadd,
    input   [63:0] jalpc,
    input   [63:0] jalrpc,
    input   [63:0] beqpc,
    input   [63:0] bnepc,
    input   [63:0] bltpc, // blt & blu
    input   [63:0] bgepc,
    input   [ 6:0] sel_nextpc,
    output  [63:0] nextpc
);

MuxKeyWithDefault #(7, 7, 64) u_MuxKeyWithDefault(
    .out         (nextpc      ),
    .key         (sel_nextpc  ),
    .default_out (pcadd       ),
    .lut         ({
        7'b0000001, pcadd,
        7'b0000010, jalpc,
        7'b0000100, jalrpc,
        7'b0001000, beqpc,
        7'b0010000, bnepc,
        7'b0100000, bltpc,
        7'b1000000, bgepc
    })
);

endmodule
