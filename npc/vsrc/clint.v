module clint(
    input       clk,
    input       rst,
    input       ena,
    input       MIE,
    input       MTIE,
    input       mtcmp_we,
    input [63:0] mtcmp_wdata,
    output      tint,
    output [63:0] mtcmp_rdata
);

// 处理计时器中断
reg [63:0] mtime, mtimecmp;

assign mtcmp_rdata = mtimecmp;

// mtime自增
always @(posedge clk) begin
    if (rst) begin
      mtime <= 64'b0;
      // $display("mtime:%x mtimecmp:%x", mtime, mtimecmp);
    end
    else begin
      mtime <= mtime + 1;
    end
end

// 读取mtimecmp
always @(posedge clk) begin
  if (rst) begin
    mtimecmp <= 64'b0;
  end
  else if (mtcmp_we) begin
    mtimecmp <= mtcmp_wdata;
  end
end

// 判断mtime
wire mtime_bigger;
assign mtime_bigger = (mtime >= mtimecmp);
assign tint = mtime_bigger && MIE && MTIE && ena;

endmodule
