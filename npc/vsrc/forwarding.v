module forwarding(
    input       [ 4:0] raddr1,
    input       [ 4:0] raddr2,
    input              re1,
    input              re2,
    // 来自ex阶段
    input              ex_we,
    input              ex_load,
    input       [ 4:0] ex_waddr,
    input       [63:0] ex_alu_result,
    // 来自mem阶段
    input              mem_we,
    input              mem_load,
    input       [ 4:0] mem_waddr,
    input       [63:0] mem_alu_result,
    // 来自wb阶段
    input              wb_we,
    input       [ 4:0] wb_waddr,
    input       [63:0] wb_wdata,

    output             ForwardA,
    output             ForwardB,
    output      [63:0] ASrc,
    output      [63:0] BSrc
);

wire ForwardA_ex, ForwardA_mem, ForwardA_wb;
wire ForwardB_ex, ForwardB_mem, ForwardB_wb;

wire we_forward_ex, we_forward_mem, we_forward_wb;
assign we_forward_ex = ex_we && ~ex_load;
assign we_forward_mem = mem_we && ~mem_load;
assign we_forward_wb = wb_we;

assign ForwardA_ex = we_forward_ex && ex_waddr == raddr1 && raddr1 != 0 && re1;
assign ForwardA_mem = we_forward_mem && mem_waddr == raddr1 && raddr1 != 0 && re1;
assign ForwardA_wb = we_forward_wb && wb_waddr == raddr1 && raddr1 != 0 && re1;

assign ForwardB_ex = we_forward_ex && ex_waddr == raddr2 && raddr2 != 0 && re2;
assign ForwardB_mem = we_forward_mem && mem_waddr == raddr2 && raddr2 != 0 && re2;
assign ForwardB_wb = we_forward_wb && wb_waddr == raddr2 && raddr2 != 0 && re2;

assign ForwardA = ForwardA_ex | ForwardA_mem | ForwardA_wb;
assign ForwardB = ForwardB_ex | ForwardB_mem | ForwardB_wb;
assign ASrc = ForwardA_ex ? ex_alu_result :
              ForwardA_mem ? mem_alu_result :
              ForwardA_wb ? wb_wdata :
                            64'b0;
assign BSrc = ForwardB_ex ? ex_alu_result :
              ForwardB_mem ? mem_alu_result :
              ForwardB_wb ? wb_wdata :
                            64'b0;

endmodule
