#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

const char *regs1[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i)) {
      Log("Difftest error at PC: 0x%08lx", pc);
      Log("reg:%s different\tref:%lx   dut:%lx\n", regs1[i], ref_r->gpr[i], gpr(i));
      return false;
    }
  }
  if (ref_r->pc != pc)  {
    printf("refpc:" FMT_WORD "pc:" FMT_WORD "\n", ref_r->pc, pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
