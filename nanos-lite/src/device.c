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

extern int screen_w, screen_h;

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (size_t i = 0; i < len; i++) {
    putch(*((char*)buf + i));
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  // 无有效按键
  if (ev.keycode == AM_KEY_NONE || ev.keycode > 255)
    return 0;
  
  // printf("keydown:%d keycode:%d\n", ev.keydown, ev.keycode);

  return snprintf((char *)buf, len, "k%c %s\n", ev.keydown ? 'd' : 'u', keyname[ev.keycode]);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T ev = io_read(AM_GPU_CONFIG);
  return snprintf((char*)buf, len, "WIDTH: %d\nHEIGHT: %d\n", ev.width, ev.height);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  int x = offset / 4 % screen_w, y = offset / 4 / screen_w;
  int num = len / 4;
  int w = num % screen_w, h = 1;
  // printf("fb_write at x:%d y:%d w:%d h:%d\n", x, y, w, h);
  io_write(AM_GPU_FBDRAW, x, y, (void*)buf, w, h, 1);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
