module ysyx_22040088_genrfwdata(
    input   [63:0] alu_result,
    input   [63:0] mem_rdata,
    input   [ 1:0] sel_rfwdata,
    output  [63:0] rf_wdata
);

assign rf_wdata = ({64{sel_rfwdata[0]}} & alu_result)
                | ({64{sel_rfwdata[1]}} & mem_rdata);

endmodule
