#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i))
      return false;
  }
  if (ref_r->pc != pc + 4)  {
    printf("refpc:" FMT_WORD "pc:" FMT_WORD, ref_r->pc, pc + 4);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
