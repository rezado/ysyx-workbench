module ctrl(
    input           if_stall,
    input           id_stall,
    input           ex_stall,
    input           mem_stall,
    output          if_ena,
    output          if_valid,
    output          id_ena,
    output          id_valid,
    output          ex_ena,
    output          ex_valid,
    output          mem_ena,
    output          mem_valid,
    output          wb_ena,
    output          wb_valid
);

assign if_ena = ~(if_stall || id_stall || ex_stall || mem_stall);
assign id_ena = ~(id_stall || ex_stall || mem_stall);
assign ex_ena = ~(ex_stall || mem_stall);
assign mem_ena = ~mem_stall;
assign wb_ena = 1'b1;

assign if_valid = 1'b1;
assign id_valid = ~if_stall;
assign ex_valid = ~id_stall;
assign mem_valid = ~(ex_stall);
assign wb_valid = ~(mem_stall);

endmodule
