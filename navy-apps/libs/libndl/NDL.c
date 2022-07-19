#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int x0 = 0, y0 = 0;  // 画布左上角的坐标

uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_usec;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", 0, 0);
  assert(fd != -1);
  int ret = read(fd, buf, len);
  return ret;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  // printf("w:%d h:%d\n", *w, *h);
  if (*w == 0 && *h == 0) {
    *w = screen_w; *h = screen_h;
  }
  *w = *w > screen_w ? screen_w : *w;
  *h = *h > screen_h ? screen_h : *h;
  // 画布居中
  x0 = (screen_w - *w) / 2;
  y0 = (screen_h - *h) / 2;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fd = open("/dev/fb", 0, 0);
  printf("into NDL_Draw\n");
  if (x0 == 0 && y0 == 0 && x == 0 && y == 0 && w == screen_w && h == screen_h) {
    // 全屏幕绘图
    printf("into full screen\n");
    write(fd, pixels, w * h * 4);
  }

  uint32_t *p = pixels;
  int x1, y1, offset;
  for (int i = 0; i < h; i++) {
    y1 = y0 + y + i;
    x1 = x0 + x;
    offset = y1 * screen_w + x1;
    printf("write at x:%d y:%d offset:%d w:%d\n", x1, y1, offset, w);
    lseek(fd, offset, SEEK_SET);
    write(fd, p + i * w, w);
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  // 读屏幕大小
  int fd = open("/proc/dispinfo", 0, 0);
  assert(fd != -1);
  char buf[64];
  int ret = read(fd, buf, 64);
  sscanf(buf, "WIDTH: %d\nHEIGHT: %d\n", &screen_w, &screen_h);

  return 0;
}

void NDL_Quit() {
}
