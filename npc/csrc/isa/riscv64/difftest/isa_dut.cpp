#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    printf("%lx %lx\n",ref_r->gpr[i], gpr(i))
    if (ref_r->gpr[i] != gpr(i))
      return false;
  }
  if (ref_r->pc != pc)  {
    printf("refpc:" FMT_WORD "pc:" FMT_WORD "\n", ref_r->pc, pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
