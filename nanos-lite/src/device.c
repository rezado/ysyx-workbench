#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

// __attribute__(used)是一个编译选项，表示即使变量没有被引用，编译器也不会把它优化掉
static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (size_t i = 0; i < len; i++) {
    putch(*((char*)buf + i));
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  bool keydown;
  int keycode;
  int ret = 0;
  keydown = io_read(AM_INPUT_KEYBRD).keydown;
  keycode = io_read(AM_INPUT_KEYBRD).keycode;
  printf("keydown:%d keycode:%d\n", keydown, keycode);
  // 无有效按键
  if (keycode > 255)
    return 0;

  if (keydown == true) sprintf((char*)buf, "%s", "kd ");
  else sprintf((char*)buf, "%s", "ku ");
  ret = sprintf((char*)buf, "%s", keyname[keycode]) + 3;
  
  return ret;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
