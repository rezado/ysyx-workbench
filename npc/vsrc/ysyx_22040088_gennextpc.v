module ysyx_22040088_gennextpc(
    input   [63:0] pcadd,
    input   [63:0] jalpc,
    input   [63:0] jalrpc,
    input   [ 2:0] sel_nextpc,
    output  [63:0] nextpc
);

MuxKeyWithDefault #(3, 3, 64) u_MuxKeyWithDefault(
    .out         (nextpc         ),
    .key         (sel_nextpc      ),
    .default_out (64'b0 ),
    .lut         ({
        3'b001, pcadd,
        3'b010, jalpc,
        3'b100, jalrpc
    })
);


endmodule
