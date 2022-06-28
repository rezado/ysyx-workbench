#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

int isa_exec_once(Decode *s) {
  single_cycle();
  s->dnpc = top->pc;
  return 0;
}
