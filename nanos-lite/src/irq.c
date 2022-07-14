#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD: printf("event YIELD occured! ID = %d\n", e.event); break;
    case EVENT_SYSCALL: printf("eventt SYSCALL occured! ID=%d\n", e.event); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
