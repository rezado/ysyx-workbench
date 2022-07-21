#include <NDL.h>
#include <SDL.h>
#include <string.h>

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
  bool keydown;
  int keycode;
  char str1[64], str2[64];
  sscanf(buf, "%s %s\n", str1, str2);
  if (strcmp(str1, "kd") == 0) keydown = true;
  else keydown = false;

  int i = 0;
  while(1) {
    if (strcmp(str2, keyname[i]) == 0) {
      keycode = i;
      break;
    }
    i++;
  }

  ev->type = keydown ? SDL_KEYDOWN : SDL_KEYUP;
  ev->key.keysym.sym = i;
  
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  int ret = 0;
  while (1) {
    ret = SDL_PollEvent(event);
    if (ret) break;
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
