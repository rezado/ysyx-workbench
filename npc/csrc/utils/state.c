#include <utils.h>

NEMUState npc_state = { .state = NEMU_STOP };

int is_exit_status_bad() {
  int good = (npc_state.state == NEMU_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NEMU_QUIT) || (npc_state.state == NEMU_STOP && npc_state.halt_ret == 0 && npc_state.halt_pc == 0 );
  return !good;
}