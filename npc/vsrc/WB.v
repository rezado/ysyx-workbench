module WB(
    input   [63:0] alu_result,
    input   [63:0] mem_rdata,
    input   [ 1:0] sel_rfwdata,
    output  [63:0] rf_wdata
);

ysyx_22040088_genrfwdata ysyx_22040088_genrfwdata(
    .alu_result  (alu_result  ),
    .mem_rdata   (mem_rdata   ),
    .sel_rfwdata (sel_rfwdata ),
    .rf_wdata    (rf_wdata    )
);

endmodule
