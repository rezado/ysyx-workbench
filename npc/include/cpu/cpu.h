#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>

void single_cycle();
void cpu_exec(uint64_t n);
void reset(int n);
void finish_sim();

void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);

#define NEMUTRAP(thispc, code) set_nemu_state(NEMU_END, thispc, code)
#define INV(thispc) invalid_inst(thispc)

#endif
