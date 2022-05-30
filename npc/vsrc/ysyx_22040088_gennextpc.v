module ysyx_22040088_gennextpc(
    input   [63:0] pcadd,
    input   [63:0] jalpc,
    input   [63:0] jalrpc,
    input   [63:0] beqpc,
    input   [ 3:0] sel_nextpc,
    output  [63:0] nextpc
);

MuxKeyWithDefault #(4, 4, 64) u_MuxKeyWithDefault(
    .out         (nextpc         ),
    .key         (sel_nextpc      ),
    .default_out (64'b0 ),
    .lut         ({
        4'b0001, pcadd,
        4'b0010, jalpc,
        4'b0100, jalrpc,
        4'b1000, beqpc
    })
);


endmodule
