#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_J,TYPE_R,TYPE_B,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1),21) ; }  
static word_t immB(uint32_t i) { return SEXT((BITS(i, 31, 31) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1) ,13);}

//根据传入的指令类型进行操作数的译码，dest——目的操作数；src——源操作数
static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);    //位截取
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);       //对目标操作数进行寄存器操作数的译码
  switch (type) {
    //src1R等宏用于将译码结果记录到相应的操作数变量中，immI用于从指令中抽取出立即数
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;        
    case TYPE_U: src1I(immU(i)); break;           
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;   //注意：为了方便处理，S型指令将立即数记录到目标操作数dest中
    case TYPE_J: src1I(immJ(i)); break;
    case TYPE_R: src1R(rs1);     src2R(rs2); break;
    case TYPE_B: src1R(rs1);     src2R(rs2); destI(immB(i)); break;
  }
}

//译码
static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)          //取指时会把指令记录到val中
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
  //格式为：INSTPAT（模式字符串，指令名称，指令类型，指令执行的操作）
  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  //新增
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->pc + 4, s->dnpc = s->pc + src1);
  
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);
  
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, word_t t = s->pc + 4; s->dnpc = (src1 + src2)&~1 ; R(dest) = t);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(BITS(Mr(src1 + src2, 8), 31, 0),32));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2 ? 1 : 0) );
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS((src1 + src2),31,0),32));
  
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS((src1 + src2),31,0), 32));
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1 == src2) s->dnpc = s->pc + dest);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if(src1 >= src2) s->dnpc = s->pc + dest);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1 != src2) s->dnpc = s->pc + dest);

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));  //若前面所有的模式匹配规则都无法成功匹配, 则将该指令视为非法指令
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);  //修改snpc的值，使其变成下一条指令的pc
  return decode_exec(s);
}
