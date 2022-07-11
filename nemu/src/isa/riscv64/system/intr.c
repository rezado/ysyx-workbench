#include <isa.h>

 word_t mc[20] = {
   0x0000000b
 };

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  csr(MEPC) = epc;  // 設定爲ecall指令本身PC
  csr(MCAUSE) = mc[NO];

  return csr(MTVEC);
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
