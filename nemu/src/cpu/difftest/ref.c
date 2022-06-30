#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

typedef struct diff_context_t {
  word_t gpr[32];
  word_t pc;
}diff_context_t;

void diff_set_regs(void *dut) {
  diff_context_t* p = (diff_context_t*)dut;
  for (int i = 0; i < 32; i++) {
    cpu.gpr[i] = p->gpr[i];
  }
  cpu.pc = p->pc;
}

void diff_get_regs(void* dut) {
  diff_context_t* p = (diff_context_t*)dut;
  puts("intoi");
  for (int i = 0; i < 32; i++) {
    printf("%lx", cpu.gpr[i]);
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
    puts("DIFFTEST_TO_DUT");
    // for (int i = 0; i < 32; i++) {
    //   printf("%lx\n", cpu.gpr[i]);
    // }
    diff_context_t* p = (diff_context_t*)dut;
    puts("intoi");
    for (int i = 0; i < 32; i++) {
      printf("%lx", cpu.gpr[i]);
      p->gpr[i] = cpu.gpr[i];
    }
    p->pc = cpu.pc;
    // diff_get_regs(dut);
  }
}

void diff_step(uint64_t n) {
  cpu_exec(n);
  printf("nemu exec:%ld insts\n", n);
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
