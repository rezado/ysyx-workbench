module ysyx_22040088_genrfwdata(
    input   [63:0] alu_result,
    input   [63:0] mem_rdata,
    input   [ 2:0] sel_rfwdata,
    input   [ 3:0] mem_mask,
    output  [63:0] rf_wdata
);

wire [63:0] mem_zext, mem_sext;

assign mem_zext = mem_mask[0] ? mem_rdata :
                  mem_mask[1] ? {{32{mem_rdata[31]}}, mem_rdata[31:0]} :
                  mem_mask[2] ? {{48{mem_rdata[15]}}, mem_rdata[15:0]} :
                  mem_mask[3] ? {{56{mem_rdata[7]}}, mem_rdata[7:0]} :
                                64'b0;

assign mem_zext = mem_mask[0] ? mem_rdata :
                  mem_mask[1] ? {32'b0, mem_rdata[31:0]} :
                  mem_mask[2] ? {48'b0, mem_rdata[15:0]} :
                  mem_mask[3] ? {56'b0, mem_rdata[7:0]} :
                                64'b0;


assign rf_wdata = ({64{sel_rfwdata[0]}} & alu_result)
                | ({64{sel_rfwdata[1]}} & mem_sext)
                | ({64{sel_rfwdata[2]}} & mem_zext);

endmodule
