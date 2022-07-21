#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inl(VGACTL_ADDR) >> 16, .height = inl(VGACTL_ADDR) & 0x0000ffff,
    .vmemsz = cfg->width * cfg->height
  };
  // printf("am:width%d height%dvmemsz%d\n", cfg->width, cfg->height, cfg->vmemsz);
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  int width = inl(VGACTL_ADDR) >> 16;
  uintptr_t addr = FB_ADDR; 
  int w = ctl->w, h = ctl->h;
  int x = ctl->x, y = ctl->y;
  uint32_t *p = (uint32_t*)ctl->pixels;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      addr = FB_ADDR + ((y + i) * width + (x + j)) * 4;
      printf("addr:%x p:%x\n", addr, *p);
      outl(addr, *p++);
    }
  }
  // int width = inl(VGACTL_ADDR) >> 16;
  // int col = ctl->h, row = ctl->w;
  // int offset = 0;
  // for (int x = ctl->x; x < ctl->x + row; x++) {
  //   for (int y = ctl->y; y < ctl->y + col; y++) {
  //     offset = y * width + x;
  //     outl(FB_ADDR + offset, *(uint32_t*)(ctl->pixels++));
  //   }
  // }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
