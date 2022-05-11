#include <common.h>

extern uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r);
void dump_gpr();
word_t isa_reg_str2val(const char *s, bool *success);