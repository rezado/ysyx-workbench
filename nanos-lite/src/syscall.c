#include <common.h>
#include "syscall.h"
// #define ETRACE
const char *syscname[] = {
  "SYS_exit", "SYS_yield", "SYS_open", "SYS_read", "SYS_write", "SYS_kill",
  "SYS_getpid", "SYS_close", "SYS_lseek", "SYS_brk", "SYS_fstat", "SYS_time",
  "SYS_signal", "SYS_execve", "SYS_fork", "SYS_link", "SYS_unlink",
  "SYS_wait", "SYS_times", "SYS_gettimeofday"
};

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  // printf("a0:%x a1:%x a2:%x a3:%x\n", a[0], a[1], a[2], a[3]);


  switch (a[0]) {
    case SYS_yield: 
      yield();
      #ifdef ETRACE
      Log("Syscall: yield()\n");
      #endif
      break;
    case SYS_exit:
      halt(a[0]);
      #ifdef ETRACE
      Log("Syscall: exit(%x)", a[0]);
      #endif
      break;
    case SYS_write:
      if (a[1] == 1 || a[1] == 2) {
        for (int i = 0; i < a[3]; i++)
          putch(*(char*)(a[2] + i));
        c->GPRx = a[3];
      }
      else {
        c->GPRx = -1;
      }
      #ifdef ETRACE
      Log("Syscall: write(%x, %x, %x) = %x", a[1], a[2], a[3], c->GPRx);
      #endif
      break;
    case SYS_brk:
      c->GPRx = 0;
      #ifdef ETRACE
        Log("Syscall: brk(%x) = %x", a[1], c->GPRx);
      #endif
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}