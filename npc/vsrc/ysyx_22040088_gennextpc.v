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

assign nextpc = ({64{sel_nextpc[0]}} & pcadd)
              | ({64{sel_nextpc[1]}} & jalpc)
              | ({64{sel_nextpc[2]}} & jalrpc)
              | ({64{sel_nextpc[3]}} & beqpc)
              | ({64{sel_nextpc[4]}} & bnepc)
              | ({64{sel_nextpc[5]}} & bltpc)
              | ({64{sel_nextpc[6]}} & bgepc);


endmodule
