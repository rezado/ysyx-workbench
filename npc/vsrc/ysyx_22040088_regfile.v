// 通用寄存器regfile
module ysyx_22040088_regfile (
    input              clk,
    input       [63:0] wdata,
    input       [ 4:0] waddr,
    input              wen,
    input       [ 4:0] raddr1,
    input       [ 4:0] raddr2,
    output      [63:0] rdata1,
    output      [63:0] rdata2
);
    reg [63:0] rf [31:0];
    always @(posedge clk) begin
        if (wen) rf[waddr] <= wdata;
    end

assign rdata1 = (raddr1 == 5'b0) ? 64'b0 : rf[raddr1];
assign rdata2 = (raddr2 == 5'b0) ? 64'b0 : rf[raddr2];

endmodule
