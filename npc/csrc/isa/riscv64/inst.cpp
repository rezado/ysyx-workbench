#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

uint32_t inv = 0;

extern "C" void get_inv(uint32_t inst_inv) {
  inv = inst_inv;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  top->inst = s->isa.inst.val;
  single_cycle();
  s->dnpc = top->pc;

  if (inv != 0) {
    INV(s->pc);
  }

  return 0;
}
