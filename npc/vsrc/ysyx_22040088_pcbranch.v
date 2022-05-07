module ysyx_22040088_pcbranch(
    input   [63:0] pc,
    input   [63:0] immI,
    input   [63:0] immJ,
    input   [63:0] rdata1,
    output  [63:0] pcadd,
    output  [63:0] jalpc,
    output  [63:0] jalrpc
);

assign pcadd = pc + 4;
assign jalpc = pc + immJ;
assign jalrpc = (rdata1 + immI) & ~1;

endmodule