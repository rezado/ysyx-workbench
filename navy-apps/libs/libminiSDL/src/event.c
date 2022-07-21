#include <NDL.h>
#include <SDL.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  int ret = NDL_PollEvent(buf, sizeof(buf));
  if (ret == 0) return 0;
  char str1[64], str2[64];
  sscanf(buf, "%s %s\n", str1, str2);
  
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
