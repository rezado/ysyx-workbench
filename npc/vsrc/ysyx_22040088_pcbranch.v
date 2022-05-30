module ysyx_22040088_pcbranch(
    input   [63:0] pc,
    input   [63:0] immI,
    input   [63:0] immJ,
    input   [63:0] rdata1,
    input   [63:0] alu_result,
    input   [63:0] immB,
    output  [63:0] pcadd,
    output  [63:0] jalpc,
    output  [63:0] jalrpc,
    output  [63:0] beqpc,
    output  [63:0] bnepc,
    output  [63:0] bltpc, // blt & blu
    output  [63:0] bgepc
);

wire zero, neg;
assign zero = (alu_result == 64'b0);
assign neg = alu_result[63];

wire [63:0] pcB;
assign pcB = pc + immB;

assign pcadd = pc + 4;
assign jalpc = pc + immJ;
assign jalrpc = (rdata1 + immI) & ~1;
assign beqpc = zero ? pcB : pcadd;
assign bnepc = zero ? pcadd : pcB;
assign bltpc = neg ? pcB : pcadd;
assign bgepc = ~neg ? pcB : pcadd;

endmodule
