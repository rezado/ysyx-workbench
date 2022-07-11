#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  word_t csr[4];
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

enum {
  ECALL = 0
};

// CSR
enum {
  MEPC = 0,
  MCAUSE, MSTATUS, MTVEC
};

static inline int32_t getcsr(uint32_t num) {
  switch(num) {
    case 0x341: return MEPC;
    case 0x342: return MCAUSE;
    case 0x300: return MSTATUS;
    case 0x305: return MTVEC;
    default: Assert(0, "get wrong csr num:%d\n", num);
  }
}

#define csr(idx) (cpu.csr[getcsr(idx)])

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
