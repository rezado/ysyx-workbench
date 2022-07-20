#include <common.h>
#include "syscall.h"
#include <fs.h>

// #define ETRACE

struct timeval {
    long      tv_sec;     /* seconds */
    long      tv_usec;    /* microseconds */
};

struct timezone {
    int tz_minuteswest;     /* minutes west of Greenwich */
    int tz_dsttime;         /* type of DST correction */
};

int _gettime(struct timeval *tv, struct timezone *tz) {
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
  tv->tv_usec = us % 1000000;
  tv->tv_sec = us / 1000000;
  return 0;
}

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
    case SYS_brk:
      c->GPRx = 0;
      #ifdef ETRACE
        Log("Syscall: brk(%x) = %x", a[1], c->GPRx);
      #endif
      break;
    case SYS_open:
      c->GPRx = fs_open((char*)a[1], a[2], a[3]);
      #ifdef ETRACE
        Log("Syscall: open(%s, %x, %x) = %d", (char*)a[1], a[2], a[3], (int)c->GPRx);
      #endif
      break;
    case SYS_read:
      c->GPRx = fs_read(a[1], (void*)a[2], a[3]);
      #ifdef ETRACE
        Log("Syscall: read(%s, %x, %d) = %d", getfilename(a[1]), a[2], a[3], c->GPRx);
      #endif
      break;
    case SYS_write:
      c->GPRx = fs_write(a[1], (void*)a[2], a[3]);
      #ifdef ETRACE
        if (a[1] > 2) Log("Syscall: write(%s, %x, %d) = %d", getfilename(a[1]), a[2], a[3], c->GPRx);
      #endif
      break;
    case SYS_close:
      c->GPRx = fs_close(a[1]);
      #ifdef ETRACE
        Log("Syscall: close(%s) = %x", getfilename(a[1]), c->GPRx);
      #endif
      break;
    case SYS_lseek:
      c->GPRx = fs_lseek(a[1], a[2], a[3]);
      #ifdef ETRACE
        Log("Syscall: lseek(%s, %d, %d) = %d", getfilename(a[1]), a[2], a[3], c->GPRx);
      #endif
      break;
    case SYS_gettimeofday:
      c->GPRx = _gettime((struct timeval*)a[1], (struct timezone *)a[2]);
      #ifdef ETRACE
        Log("Syscall: gettimeofday(%x, %x) = %d", a[1], a[2], c->GPRx);
      #endif
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}