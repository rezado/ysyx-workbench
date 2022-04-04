module vga_ctrl(
    input           pclk,     //25MHz时钟
    input           reset,    //置位
    input  [23:0]   vga_data, //上层模块提供的VGA颜色数据
    output [9:0]    h_addr,   //提供给上层模块的当前扫描像素点坐标
    output [9:0]    v_addr,
    output          hsync,    //行同步和列同步信号
    output          vsync,
    output          valid,    //消隐信号
    output [7:0]    vga_r,    //红绿蓝颜色信号
    output [7:0]    vga_g,
    output [7:0]    vga_b
    );

  //640x480分辨率下的VGA参数设置
  parameter    h_frontporch = 96; // 行同步负脉冲
  parameter    h_active = 144; // 行活跃开始时间 96 + 48
  parameter    h_backporch = 784; // 行消隐前沿时间点
  parameter    h_total = 800; // 总时间

  parameter    v_frontporch = 2;
  parameter    v_active = 35;
  parameter    v_backporch = 515;
  parameter    v_total = 525;

  //像素计数值
  reg [9:0]    x_cnt;
  reg [9:0]    y_cnt;
  wire         h_valid;
  wire         v_valid;

  always @(posedge reset or posedge pclk) //行像素计数
      if (reset == 1'b1)
        x_cnt <= 1;
      else
      begin
        if (x_cnt == h_total)
            x_cnt <= 1;
        else
            x_cnt <= x_cnt + 10'd1;
      end

  always @(posedge pclk)  //列像素计数
      if (reset == 1'b1)
        y_cnt <= 1;
      else
      begin
        if (y_cnt == v_total & x_cnt == h_total)
            y_cnt <= 1;
        else if (x_cnt == h_total)
            y_cnt <= y_cnt + 10'd1;
      end

  //矩阵计数值
  reg [6:0]   vmem_haddr;
  reg [4:0]   vmem_vaddr;
  reg [3:0]   vmem_xcnt;
  reg [4:0]   vmem_ycnt;
  wire        vmem_valid;  // 属于字符显示范围
  parameter vmem_xtotal = 8;
  parameter vmem_ytotal = 15;

  assign vmem_valid = valid && h_addr <= 630;

  //生成矩阵行
  always @(posedge pclk) begin
    if (reset == 1'b1) begin
      vmem_xcnt <= 0;
      vmem_haddr <= 0;
    end
    else if (h_valid && h_addr <= 10'd630) begin  // 行有效并且处于字符显示范围内
      if (vmem_xcnt == vmem_xtotal) begin  // 到达计数边界
        if (h_addr == 10'd630) begin  // 正好处于行尾
          vmem_xcnt <= 0;
          vmem_haddr <= 0;
        end
        else begin  // 
          vmem_xcnt <= 0;
          vmem_haddr <= vmem_haddr + 7'd1;
        end
      end
      else  // 继续计数
        vmem_xcnt <= vmem_xcnt + 4'd1;
    end
  end

  // 生成矩阵列
  always @(posedge pclk) begin
    if (reset == 1'b1) begin
      vmem_ycnt <= 0;
      vmem_vaddr <= 5'd0;
    end
    else if (v_valid) begin
      if (vmem_vaddr == 5'd29 && h_addr == 10'd630) begin
        // 位于最后一行最后一列
        vmem_ycnt <= 0;
        vmem_vaddr <= 5'd0;
      end
      else if (vmem_ycnt == vmem_ytotal && h_addr == 10'd630) begin
        // 到达最后一个像素点
        vmem_ycnt <= 0;
        vmem_vaddr <= vmem_vaddr + 5'd1;
      end
      else if (h_addr == 10'd630)
        vmem_ycnt <= vmem_ycnt + 1;
    end
  end

  //生成同步信号
  assign hsync = (x_cnt > h_frontporch);
  assign vsync = (y_cnt > v_frontporch);
  //生成消隐信号
  assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
  assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
  assign valid = h_valid & v_valid;
  //计算当前有效像素坐标
  assign h_addr = h_valid ? (x_cnt - 10'd145) : {10{1'b0}};
  assign v_addr = v_valid ? (y_cnt - 10'd36) : {10{1'b0}};
  //设置输出的颜色值
  assign vga_r = vga_data[23:16];
  assign vga_g = vga_data[15:8];
  assign vga_b = vga_data[7:0];
  
endmodule
