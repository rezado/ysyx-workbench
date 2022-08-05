module WB(
    input   [63:0] alu_result,
    input   [63:0] mem_rdata,
    input   [63:0] csr_data,
    input   [ 2:0] sel_rfwdata,
    output  [63:0] rf_wdata
);

assign rf_wdata = ({64{sel_rfwdata[0]}} & alu_result)
                | ({64{sel_rfwdata[1]}} & mem_rdata)
                | ({64{sel_rfwdata[2]}} & csr_data);

endmodule
