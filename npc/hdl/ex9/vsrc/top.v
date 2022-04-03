module top (
    input clk,
    input rst,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B
);

    assign VGA_CLK = clk;

    wire [9:0] h_addr;
    wire [9:0] v_addr;
    wire [23:0] vga_data;

    vga_ctrl my_vga_ctrl(
        .pclk(clk),
        .reset(rst),
        .vga_data(vga_data),
        .h_addr(h_addr),
        .v_addr(v_addr),
        .hsync(VGA_HSYNC),
        .vsync(VGA_VSYNC),
        .valid(VGA_BLANK_N),
        .vga_r(VGA_R),
        .vga_g(VGA_G),
        .vga_b(VGA_B)
    );

    reg [6:0] v_haddr;  // 显存行坐标
    reg [4:0] v_vaddr;  // 显存列坐标
    reg [7:0] vdata;  // 显存内容 存放ascii码
    reg [3:0] vcnt, hcnt;  // 字符内列、行坐标
    wire [11:0] font_line;  // 字符的一行
    
    always @(posedge clk) begin
        if (h_addr == 0 && v_addr == 0) begin
            // 起点
            v_haddr <= 0;
            v_vaddr <= 0;
            vcnt <= 0;
            hcnt <= 0;
        end

        if (h_addr == 629) begin
            // 到达行尾
            vcnt <= vcnt + 1;
            v_haddr <= 0;
            if (vcnt == 15) begin
                v_vaddr <= v_vaddr + 1;
                vcnt <= 0;
                $display("vdata:%d", vdata);
            end
        end
        else if (h_addr < 630) begin
            hcnt <= hcnt + 1;
            if (hcnt == 8) begin
                // 右一个格子
                v_haddr <= v_haddr + 1;
                hcnt <= 0;
                // $display("v_haddr:%d", v_haddr);
            end
        end
    end
    
    // reg [3:0] __cnt_vdata;
    // always @(posedge clk or posedge rst) begin
    //     if (rst) __cnt_vdata <= 1;
    //     else begin
    //         __cnt_vdata <= __cnt_vdata << 1;
    //     end
    //     if (__cnt_vdata < 4'd15) $display("vdata:%x", vdata);
    // end

    vmem2 my_vmem(
        .h_addr(v_haddr),
        .v_addr(v_vaddr),
        .vga_data(vdata)
    );

    font_mem my_fmem(
        .haddr(hcnt),
        .ascii(vdata),
        .data(font_line)
    );

    assign vga_data = font_line[vcnt] ? 24'hffffff : 24'h0;

endmodule
