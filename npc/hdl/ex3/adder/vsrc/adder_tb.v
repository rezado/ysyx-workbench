module adder_tb();
reg [31:0] A, B;
reg Sub;
wire Carry, Overflow, Zero;
wire [31:0] Result;

adder adder(
	.A(A),
	.B(B),
	.Sub(Sub),
	.Result(Result),
	.Carry(Carry),
	.Overflow(Overflow),
	.Zero(Zero)
);

task check;  //测试任务
  input [3:0] results;  //ALU的结果预期正确输出
  input resultof, resultc, resultz;  //ALU的预期溢出，进位，零位
  begin
    if(Result!=results)  //比较预期结果和测试单元输出的outputs
      begin               //出错时显示
        $display("Error:x=%h,y=%h,ctrl=%b,s should be %h,
          get %h", inputa, inputb, inputaluop, results, outputs);
      end
    //自行添加溢出，进位和零位的比较
  end
endtask

for(i=-8;i<=7;i=i+1) //建议i和j可以是5位以上的带符号数
  for (j=-8;j<=7;j=j+1)
    begin
      inputa=i;
      inputb=j;  //设置两个输入
      inputaluop=4'b0000; //ALU的操作码
      k = * ;    //此处自行计算正确的输出，填入*处
      of= * ;    //可分不同情况手工填写
      z = * ;
      c = * ;
      #20 check(k[3:0],of,c,z);
    end

endmodule
