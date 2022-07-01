#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
extern const char *regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i)) {
      Log("Difftest error at PC: 0x%08lx", pc);
      Log("reg:%s ref:%lx dut:%lx", regs[i], ref_r->gpr[i], gpr(i));
      printf("\tref\t\t\tdut\n");
      for (int i = 0; i < 32; i++) {
        printf("%-4s FMT_WORD\t FMT_WORD\n", regs[i], ref_r->gpr[i], gpr(i));
      }
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
