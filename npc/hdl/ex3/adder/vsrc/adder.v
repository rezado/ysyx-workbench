module adder(
	input	[31:0] A,
	input	[31:0] B,
	input		   Sub,
	output	[31:0] Result,
	output		   Carry,
	output		   Overflow,
	output		   Zero
);
	wire [31:0] t_add_Cin;
	assign t_add_Cin = ({32{Sub}} ^ B) + Sub;
	assign {Carry, Result} = A + t_add_Cin;
	assign Overflow = Sub ? (A[31] == t_add_Cin[31]) && (Result[31] != t_add_Cin[31]);
	assign Zero = ~(| Result);

endmodule
