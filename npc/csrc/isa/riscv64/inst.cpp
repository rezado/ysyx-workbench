#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

int inv = 0;

extern "C" void get_inv(int inst_inv) {
  inv = inst_inv;
}

void get_inst(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  top->inst = s->isa.inst.val;
}

int isa_exec_once(Decode *s) {
  single_cycle(s);
  s->dnpc = top->pc;

  if (inv != 0) {
    INV(s->pc);
  }

  return 0;
}
