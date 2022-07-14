#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    // case SYS_yield: panic("syscall SYS_yield ID=%d", a[0]);
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
