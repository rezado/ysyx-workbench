#include <am.h>
#include <nemu.h>

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
  uintptr_t addr = FB_ADDR + ctl->x * width + ctl->y;
  int col = ctl->h;
  int row = ctl->w;
  uint32_t *p = (uint32_t*)ctl->pixels;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      outl(addr++, *p++);
    }
    addr = addr + width - row - 1;
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
