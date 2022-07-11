#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

// CSR
enum {
  MEPC = 0,
  MCAUSE, MSTATUS, MTVEC
};

static inline uint32_t getcsr(uint32_t num) {
  switch(num) {
    case 0x341: return MEPC;
    case 0x342: return MCAUSE;
    case 0x300: return MSTATUS;
    case 0x305: return MTVEC;
    default: assert(0);
  }
}

#define csr(idx) (cpu.csr[getcsr(idx)])

#endif
