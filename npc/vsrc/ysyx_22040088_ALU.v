//ALU
module ysyx_22040088_ALU(
	input 	[10:0] alu_control,
	input 	[63:0] alu_src1,
	input 	[63:0] alu_src2,
	output	[63:0] alu_result
);

wire op_add;	//加法操作
wire op_sub;	//减法操作
wire op_slt;	//有符号比较，小于置位
wire op_sltu;	//无符号数比较，小于置位
wire op_and;	//按位与
wire op_or;		//按位或
wire op_xor;	//按位异或
wire op_sll;	//逻辑左移
wire op_srl;	//逻辑右移
wire op_sra;	//算术右移
wire op_lui;	//高位加载

assign op_add 	= alu_control[ 0];
assign op_sub	= alu_control[ 1];
assign op_slt 	= alu_control[ 2];
assign op_sltu	= alu_control[ 3];
assign op_and 	= alu_control[ 4];
assign op_or 	= alu_control[ 5];
assign op_xor 	= alu_control[ 6];
assign op_sll	= alu_control[ 7];
assign op_srl	= alu_control[ 8];
assign op_sra	= alu_control[ 9];
assign op_lui	= alu_control[10];

wire [63:0] add_sub_result;
wire [63:0] slt_result;
wire [63:0] sltu_result;
wire [63:0] and_result;
wire [63:0] or_result;
wire [63:0] xor_result;
wire [63:0] sll_result;
wire [63:0] srl_result;
wire [63:0] sra_result;
wire [63:0] lui_result;

assign and_result = alu_src1 & alu_src2;
assign or_result  = alu_src1 | alu_src2;
assign xor_result = alu_src1 ^ alu_src2;
assign lui_result = {{32{alu_src2[19]}}, alu_src2[19:0], 12'b0};

wire [63:0] adder_a;
wire [63:0] adder_b;
wire		adder_cin;
wire [63:0] adder_result;
wire 		adder_cout;

assign adder_a   = alu_src1;
assign adder_b   = (op_sub | op_slt | op_sltu) ? ~alu_src2 : alu_src2;
assign adder_cin = (op_sub | op_slt | op_sltu) ?      1'b1 :     1'b0;
assign {adder_cout, adder_result} = adder_a - adder_b + {{63{1'b0}}, adder_cin};

assign add_sub_result = adder_result;

assign slt_result[63:1] = 63'b0;
//带符号数比较
//1.如果src1为正数，src2为负数，src1>src2，返回0；
//2.如果src1与src2同号，则看相减结果的符号位，为正则src1 > src2，返回0；为负则src1 < src2，返回1
assign slt_result[0] = (alu_src1[31] & ~alu_src2[31])
					 | (~(alu_src1[31] ^ alu_src2[31]) & adder_result[31]);
//无符号数比较
assign sltu_result[63:1] = 63'b0;
assign sltu_result[0]    = ~adder_cout;
//逻辑左移
assign sll_result = alu_src1 << alu_src2[5:0];
//逻辑右移
assign srl_result = alu_src1 >> alu_src2[5:0];
//算术右移
assign sra_result = ($signed(alu_src1) >>> alu_src2[5:0]);

assign  alu_result = ({64{op_add|op_sub	}} & add_sub_result)
				   | ({64{op_sltu      	}} & sltu_result)
				   | ({64{op_slt      	}} & slt_result)
				   | ({64{op_and       	}} & and_result)
				   | ({64{op_or			}} & or_result)
				   | ({64{op_xor		}} & xor_result)
				   | ({64{op_sll		}} & sll_result)
				   | ({64{op_srl		}} & srl_result)
				   | ({64{op_sra		}} & sra_result)
				   | ({64{op_lui		}} & lui_result);

endmodule
