#include <am.h>
#include <klib.h>
#include <stdio.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  // printf("into npc irqhandle\n");
  if (user_handler) {
    Event ev = {0};
    // printf("regs:\n");
    // for (int i = 1; i < 32; i++) {
    //   printf("%x\t\t", c->gpr[i]);
    // }
    // printf("\n");
    // printf("mepc:%x mcause:%x mstatus:%x\n", c->mepc, c->mcause, c->mstatus);
    switch (c->gpr[17]) {
      case -1: 
        ev.event = EVENT_YIELD;
        c->mepc += 4;
        break;
      case 0: case 1: case 2: case 3:
      case 4: case 5: case 6: case 7:
      case 8: case 9: case 10: case 11:
      case 12: case 13: case 14: case 15:
      case 16: case 17: case 18: case 19:
        ev.event = EVENT_SYSCALL;
        c->mepc += 4;
        break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  // printf("into yield\n");
  asm volatile("li a7, -1; ecall");
  // printf("out of yield\n");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
  if (enable) {
    asm volatile("csrsi mstatus, 8");  // mstatus_MIE
    // set_csr(mie, MIP_MTIP);  // mie_MTIE
    asm volatile("csrsi mie, 128");
  }
  else {
    asm volatile("csrci mstatus, 8");
    // clear_csr(mie, MIP_MTIP);
    asm volatile("csrci mie, 128");
  }
}
