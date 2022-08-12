module icache(
    input           clk,
    input           rst,
    // 与流水线之间
    input           valid,  // 读cache请求
    input  [ 5:0]   index,
    input  [22:0]   tag,
    input  [ 2:0]   offset,
    output          addr_ok,  // 地址被接受
    output          data_ok,  // 返回数据
    output [31:0]   rdata,
    // 与内存接口之间
    output          rd_req,
    output [ 3:0]   rd_wstrb,
    output [63:0]   rd_addr,
    input  [63:0]   ret_data
);

parameter IDLE = 0, LOOKUP = 1, MISS = 2, REPLACE = 3;

reg [2:0] state, next_state;

assign addr_ok = (state == IDLE);
assign data_ok = (state == IDLE && reg_cache_hit);
assign rdata = load_res;

// {v, tag}表
reg [23:0] way0_vtag_tab [0:63];
reg [23:0] way1_vtag_tab [0:63];

wire re_vtag;
wire we_way0_vtag, we_way1_vtag;
wire [23:0] way0_vtag, way1_vtag;
wire [23:0] way0_wdata, way1_wdata;
// 读
assign re_vtag = (state == LOOKUP);
assign way0_vtag = re_vtag ? way0_vtag_tab[index] : 24'b0;
assign way1_vtag = re_vtag ? way1_vtag_tab[index] : 24'b0;
// 写(REPLACE阶段写入替换的新tag)
assign we_way0_vtag = (state == REPLACE) & ~replace_way;
assign we_way1_vtag = (state == REPLACE) & replace_way;
assign way0_wdata = {1'b1, reg_tag};
assign way1_wdata = {1'b1, reg_tag};
always @(posedge clk) begin
    if (we_way0_vtag) begin
        way0_vtag_tab[index] <= way0_wdata;
    end
    if (we_way1_vtag) begin
        way1_vtag_tab[index] <= way1_wdata;
    end
end

// Request Buffer
reg [5:0] reg_index;
reg [2:0] reg_offset;
reg [22:0] reg_tag;
always @(posedge clk) begin
    if (rst) begin
        reg_index <= 6'b0;
        reg_offset <= 3'b0;
        reg_tag <= 23'b0;
    end
    else if (state == IDLE && valid) begin
        reg_index <= index;
        reg_offset <= offset;
        reg_tag <= tag;
    end
end

// Tag Compare
wire way0_hit, way1_hit, cache_hit;
wire way0_v, way1_v;
wire [22:0] way0_tag, way1_tag;
assign way0_v = way0_vtag[23];
assign way1_v = way1_vtag[23];
assign way0_tag = way0_vtag[22:0];
assign way1_tag = way1_vtag[22:0];

assign way0_hit = way0_v && (way0_tag == reg_tag);
assign way1_hit = way1_v && (way1_tag == reg_tag);
assign cache_hit = way0_hit | way1_hit;

// 随机数发生器
reg replace_way;
always @(posedge clk) begin
    if (rst) begin
        replace_way <= 1'b0;
    end
    else begin
        replace_way <= replace_way + 1;
    end
end

// Missing Buffer
reg [63:0] reg_ret_data;
// reg reg_replace_way;
always @(posedge clk) begin
    if (rst) begin
        reg_ret_data <= 64'b0;
        // reg_replace_way <= 1'b0;
    end
    else if (state == MISS) begin
        reg_ret_data <= ret_data;
        // reg_replace_way <= replace_way; 
    end
end

// Data Select
wire [31:0] way0_load_word, way1_load_word, load_res;
wire [63:0] way0_data, way1_data;
assign way0_load_word = way0_data[reg_offset[2] * 32 +: 32];
assign way1_load_word = way1_data[reg_offset[2] * 32 +: 32];
// Selecter Buffer
reg reg_way0_hit, reg_way1_hit, reg_cache_hit;
always @(posedge clk) begin
    if (rst) begin
        reg_way0_hit <= 1'b0;
        reg_way1_hit <= 1'b0;
        reg_cache_hit <= 1'b0;
    end
    else if (state == LOOKUP) begin
        reg_way0_hit <= way0_hit;
        reg_way1_hit <= way1_hit;
        reg_cache_hit <= cache_hit;
    end
end
assign load_res = {32{reg_way0_hit}} & way0_load_word
                | {32{reg_way1_hit}} & way1_load_word;
assign ram_addr = (state == LOOKUP || state == REPLACE) ? reg_index : 6'b0;


// RAM
wire [127:0] ram_rdata, ram_wdata;
wire ram_cen, ram_wen;
wire [5:0] ram_addr;
wire [127:0] ram_bwen;
// 读cache: 1.state == LOOKUP && cache命中
assign ram_cen = ~((state == LOOKUP && cache_hit) || (state == REPLACE));
// 写cache： REPLACE阶段
assign ram_wen = ~(state == REPLACE);
assign ram_addr = (state == LOOKUP || state == REPLACE) ? reg_index : 6'b0;
assign ram_wdata = replace_way ? {reg_ret_data, 64'b0} : {64'b0, reg_ret_data};
assign ram_bwen = replace_way ? 128'hffffffff_ffffffff_00000000_00000000 : 128'h00000000_00000000_ffffffff_ffffffff;

S011HD1P_X32Y2D128 
u_S011HD1P_X32Y2D128(
    .Q   (ram_rdata   ),
    .CLK (clk ),
    .CEN (ram_cen ),
    .WEN (ram_wen ),
    .A   (ram_addr   ),
    .D   (ram_wdata   )
);

S011HD1P_X32Y2D128_BW 
u_S011HD1P_X32Y2D128_BW(
    .Q   (ram_rdata   ),
    .CLK (clk ),
    .CEN (ram_cen ),
    .WEN  (ram_wen  ),
    .BWEN (ram_bwen ),
    .A   (ram_addr   ),
    .D   (ram_wdata   )
);


assign way0_data = ram_rdata[63:0];
assign way1_data = ram_rdata[127:64];

// MISS
// 向内存请求读
assign rd_req = (state == MISS);
assign rd_wstrb = 4'b1111;
assign rd_addr = {32'b0, reg_tag, reg_index, reg_offset};

// 组合逻辑
always @(*) begin
    case (state)
        IDLE: begin
            if (valid) begin
                next_state = LOOKUP;
            end
            else begin
                next_state = IDLE;
            end
        end
        LOOKUP: begin
            if (cache_hit) begin
                next_state = IDLE;
            end
            else begin
                next_state = MISS;
            end
        end
        MISS: begin
            next_state = REPLACE;
        end
        REPLACE: begin
            next_state = LOOKUP;
        end
        default: begin
            next_state = state;
        end
    endcase
end

// 时序逻辑
always @(posedge clk) begin
    if (rst) begin
        state <= 3'b0;
    end
    else begin
        state <= next_state;
    end
end

endmodule
