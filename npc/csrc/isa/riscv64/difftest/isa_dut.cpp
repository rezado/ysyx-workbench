#include <isa.h>
#include <cpu/difftest.h>
#include <reg.h>
extern const char *regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i)) {
      Log("Difftest error at PC:" FMT_WORD , pc);
      Log("reg:%s ref: " FMT_WORD " dut: " FMT_WORD, regs[i], ref_r->gpr[i], gpr(i));
      printf("\tref\t\t\tdut\n");
      for (int i = 0; i < 32; i++) {
        printf("%-4s" FMT_WORD "\t " FMT_WORD "\n", regs[i], ref_r->gpr[i], gpr(i));
      }
      printf("refpc: " FMT_WORD " pc: " FMT_WORD "\n", ref_r->pc, pc);
      return false;
    }
  }
  if (ref_r->pc != pc)  {
    Log("Difftest error ref.pc: " FMT_WORD " dut.pc: " FMT_WORD, ref_r->pc, pc);
    printf("refpc: " FMT_WORD " pc: " FMT_WORD "\n", ref_r->pc, pc);
    printf("\tref\t\t\tdut\n");
    for (int i = 0; i < 32; i++) {
      printf("%-4s" FMT_WORD "\t " FMT_WORD "\n", regs[i], ref_r->gpr[i], gpr(i));
    }
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
