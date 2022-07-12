#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

// 一个来自操作系统的事件处理回调函数的指针
static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {

      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  printf("regs\n");
  for (int i = 0; i < 31; i++) 
    printf("0x%x\n", c->gpr[i]);
  printf("mcause:0x%x\n", c->mcause);
  printf("mstatus:0x%x\n", c->mstatus);
  printf("mepc:0x%x\n", c->mepc);

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
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
