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

    wire [7:0] vdata;  // 显存内容 存放ascii码
    wire [15:0] faddr;  // 字库地址
    wire [3:0] f_haddr;  // 字符内横坐标
    wire [3:0] f_vaddr;  // 字符内纵坐标
    
    assign f_haddr = h_addr[3:0];
    assign f_vaddr = v_addr % 9;
    assign faddr = {vdata, f_haddr, f_vaddr};

    vmem my_vmem(
        .h_addr(h_addr),
        .v_addr(v_addr[8:0]),
        .vga_data(vdata)
    );

    font_mem my_fmem(
        .x(f_haddr),
        .y(f_vaddr),
        .ascii(vdata),
        .data(vga_data)
    );

endmodule