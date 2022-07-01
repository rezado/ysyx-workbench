#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void diff_set_regs(void *dut) {
  CPU_state* p = (CPU_state*)dut;
  for (int i = 0; i < 32; i++) {
    CPU.gpr[i] = p->gpr[i];
  }
  CPU.pc = p->pc;
}

void diff_get_regs(void* dut) {
  CPU_state* p = (CPU_state*)dut;
  for (int i = 0; i < 32; i++) {
    p->gpr[i] = cpu.gpr[i];
  }
  p->pc = cpu.pc;
}

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    memcpy(guest_to_host(addr), buf, n);
  } else {
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    diff_set_regs(dut);
  } else {
    diff_get_regs(dut);
  }
}

void diff_step(uint64_t n) {
  cpu_exec(n);
}

void difftest_exec(uint64_t n) {
  diff_step(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
