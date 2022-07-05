#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int code = inl(KBD_ADDR);
  if ((code & KEYDOWN_MASK) != 0) {
    kbd->keydown = 1;
    kbd->keycode = code & ~KEYDOWN_MASK;
  }
  else {
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  }
}
