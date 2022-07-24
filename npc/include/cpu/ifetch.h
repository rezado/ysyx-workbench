#ifndef __CPU_IFETCH_H__

#include <memory/paddr.h>

static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
  long long inst;
  npc_read(*pc, &inst);
  (*pc) += len;
  return inst;
}

#endif
