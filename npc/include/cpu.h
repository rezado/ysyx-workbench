#ifndef __CPU_H__
#define __CPU_H__

#include <common.h>

void single_cycle();
void cpu_exec(uint64_t n);
void reset(int n);
void finish_sim();

#endif
