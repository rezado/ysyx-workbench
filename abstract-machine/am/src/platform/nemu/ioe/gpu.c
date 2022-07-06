#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
   int i;
   int w = inl(VGACTL_ADDR) >> 16;  // TODO: get the correct width
   int h = inl(VGACTL_ADDR) & 0x0000ffff;  // TODO: get the correct height
   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
   for (i = 0; i < w * h; i ++) fb[i] = i;
   outl(SYNC_ADDR, 1);
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
  uintptr_t addr = FB_ADDR + ctl->x * width + ctl->y;
  for (int x = ctl->x; x < ctl->x + ctl->w; x++) {
    for (int y = ctl->y; y < ctl->y + ctl->h; y++) {
      outl(addr++, *(uint32_t*)ctl->pixels++);
      // printf("write addr:%x %d\n", addr, *(uint32_t*)ctl->pixels);
    }
    addr = addr + width - ctl->w;
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
