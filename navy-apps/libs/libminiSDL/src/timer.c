#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>
#include <assert.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  assert(0);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  assert(0);
  return 1;
}

uint32_t SDL_GetTicks() {
  return NDL_GetTicks();
}

// Wait a specified number of milliseconds before returning
void SDL_Delay(uint32_t ms) {
  int time = 0;
  while (1) {
    time = SDL_GetTicks();
    if (time > ms) return;
  }
}