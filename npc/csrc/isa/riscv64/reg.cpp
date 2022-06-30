#include <isa.h>
#include "local-include/reg.h"
#include <common.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

uint64_t *cpu_gpr = NULL;
void gprcpy() {
  for (int i = 0; i < 32; i++) {
    printf("%lx\n", cpu_gpr[i]);
    cpu.gpr[i] = cpu_gpr[i];
  }
}
// 读取寄存器相关
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  gprcpy();
  int i;
  for (i = 0; i < 32; i++) {
    printf("%s : 0x%lx\n", regs[i], gpr(i));
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  gprcpy();
  if (strcmp(s, "pc") == 0) {
    *success = true;
    return cpu.pc;
  }
  for (int i = 0; i < 32; i++) {
    if (strcmp(s, regs[i]) == 0) {
      *success = true;
      return gpr(i);
    }
  }
  *success = false;
  return 0;
}