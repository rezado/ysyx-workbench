module MEM(
    input         clk,
    input         ena,
    input         wen,
    input [ 3:0]  mem_mask,
    input [63:0]  addr,
    input [63:0]  wdata,
    input [ 1:0]  sel_memdata,
    input [63:0]  mtcmp_rdata,
    output [63:0] rdata,
    output        mtcmp_we,
    output        mtcmp_re,
    output [63:0] mtcmp_wdata
);
wire mem_we, mem_ena;
wire [63:0] mem_rdata;
wire sel_mtcmp;
assign sel_mtcmp = (addr == 64'h02004000);
assign mtcmp_re = sel_mtcmp && ena && ~wen;
assign mtcmp_we = sel_mtcmp && ena && wen;
assign mtcmp_wdata = sel_mtcmp ? wdata : 64'b0;
assign mem_we = sel_mtcmp ? 1'b0 : wen;
assign mem_ena = sel_mtcmp ? 1'b0 : ena;
mem u_mem(
    .clk      (clk      ),
    .ena      (mem_ena      ),
    .wen      (mem_we      ),
    .mem_mask (mem_mask ),
    .addr     (addr     ),
    .wdata    (wdata    ),
    .rdata    (mem_rdata )
);
// 符号扩展和零扩展
wire [63:0] mem_zext, mem_sext;

assign mem_sext = mem_mask[0] ? mem_rdata :
                  mem_mask[1] ? {{32{mem_rdata[31]}}, mem_rdata[31:0]} :
                  mem_mask[2] ? {{48{mem_rdata[15]}}, mem_rdata[15:0]} :
                  mem_mask[3] ? {{56{mem_rdata[7]}}, mem_rdata[7:0]} :
                                64'b0;

assign mem_zext = mem_mask[0] ? mem_rdata :
                  mem_mask[1] ? {32'b0, mem_rdata[31:0]} :
                  mem_mask[2] ? {48'b0, mem_rdata[15:0]} :
                  mem_mask[3] ? {56'b0, mem_rdata[7:0]} :
                                64'b0;
// 选择mem读出的数据
assign rdata = mtcmp_re       ? mtcmp_rdata :
               sel_memdata[0] ? mem_sext :
               sel_memdata[1] ? mem_zext :
                                64'b0;

endmodule
