#ifndef __REG_H__
#define __REG_H__


extern "C" void set_gpr_ptr(const svOpenArrayHandle r);
void dump_gpr();
word_t isa_reg_str2val(const char *s, bool *success);

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
