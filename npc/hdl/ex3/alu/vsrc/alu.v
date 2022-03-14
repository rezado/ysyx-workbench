module alu(
    input   [3:0] A,
    input   [3:0] B,
    input   [2:0] op,
    output  [3:0] result,
    output         overflow,
    output         carry,
    output         zero
);

    wire op_add, op_sub, op_not, op_and, op_or, op_xor, op_less, op_equal;
    assign op_add = (op == 3'b000);
    assign op_sub = (op == 3'b001);
    assign op_not = (op == 3'b010);
    assign op_and = (op == 3'b011);
    assign op_or = (op == 3'b100);
    assign op_xor = (op == 3'b101);
    assign op_less = (op == 3'b110);
    assign op_equal = (op == 3'b111);

    wire [3:0]add_sub_result;
    wire [3:0]not_result;
    wire [3:0]and_result;
    wire [3:0]or_result;
    wire [3:0]xor_result;
    wire [3:0]less_result;
    wire [3:0]equal_result;

    wire [3:0] adder_a;
    wire [3:0] adder_b;
    wire		adder_cin;

    assign adder_a   = A;
    assign adder_b   = (op_sub | op_less | op_equal) ? ~B : B;
    assign adder_cin = (op_sub | op_less | op_equal) ? 1'b1 : 1'b0;
    assign {carry, add_sub_result} = adder_a + adder_b + {4'b0, adder_cin};
    assign overflow = (adder_a[3] == adder_b[3]) && (add_sub_result[3] != adder_a[3]);
    assign zero = ~(| add_sub_result); // 一元约简运算

    assign not_result = ~A;
    assign and_result = A & B;
    assign or_result = A | B;
    assign xor_result = A ^ B;
    assign less_result[3:1] = 3'b0;
    //带符号数比较
    //1.如果A为正数，B为负数，A>B，返回0；
    //2.如果A与B同号，则看相减结果的符号位，为正则A > B，返回0；为负则A < B，返回1
    assign less_result[0] = (A[3] & ~B[3])
                        | (~(A[3] ^ B[3]) & add_sub_result[3]);
    
    assign equal_result[3:1] = 3'b0;
    assign equal_result[0] = zero;

    assign result = (({4{op_add}} | {4{op_sub}}) & add_sub_result)
                  | ({4{op_not}} & not_result)
                  | ({4{op_and}} & and_result)
                  | ({4{op_or}} & or_result)
                  | ({4{op_xor}} & xor_result)
                  | ({4{op_less}} & less_result)
                  | ({4{op_equal}} & equal_result);


endmodule
