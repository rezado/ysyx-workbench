#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[MEPC] = epc;  // 設定爲ecall指令本身PC
  cpu.csr[MCAUSE] = NO;
  // assert(NO == 0);

#ifdef CONFIG_ETRACE
  Log("ECALL: oldPC " FMT_WORD "  newPC " FMT_WORD "  mcause: %ld", epc, cpu.csr[MTVEC], NO);
#endif
  printf("%lx\n", cpu.csr[MTVEC]);

  return cpu.csr[MTVEC];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

word_t isa_ret_intr(vaddr_t pc) {
  word_t MIE = BITS(cpu.csr[MSTATUS], 8, 8);
  if (MIE == 1)
    cpu.csr[MSTATUS] |= 0x10000000;
  else
    cpu.csr[MSTATUS] &= ~0x10000000;
  cpu.csr[MSTATUS] |= 0x8;
#ifdef CONFIG_ETRACE
  Log("RET: oldPC " FMT_WORD "  newPC " FMT_WORD "  mcause: %ld", cpu.pc, cpu.csr[MEPC] + 4, cpu.csr[MCAUSE]);
#endif
  printf("%lx\n", cpu.csr[MTVEC]);

  return cpu.csr[MEPC] + 4;
}