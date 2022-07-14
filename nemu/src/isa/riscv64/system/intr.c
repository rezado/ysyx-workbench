#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[MEPC] = epc;  // 設定爲ecall指令本身PC
  cpu.csr[MCAUSE] = NO;
  // assert(NO == 0);

#ifdef CONFIG_ETRACE
  Log("ETACE: oldPC " FMT_WORD "  newPC " FMT_WORD "  mcause: %ld", epc, cpu.csr[MTVEC], NO);
#endif

  return cpu.csr[MTVEC];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
