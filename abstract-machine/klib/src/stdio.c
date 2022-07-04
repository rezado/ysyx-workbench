#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  assert(0);
  char *pri = out;
  va_list ap;
  va_start(ap, fmt);
  size_t i;
  size_t len = strlen(fmt);
  int flag = 0, argDec;
  char op;
  char *argStr = NULL;
  char num[50];
  int t, cnt;  // 一些临时变量
  for (i = 0; i < len; i++) {
    if (fmt[i] == '%') {
      flag = 1;
    }
    else if (!flag) {
      *out = fmt[i];
      out++;
    }
    else {
      flag = 0;
      op = fmt[i];
      if (op == 'd') {
        argDec = va_arg(ap, int);
        if (argDec < 0) {
          *out++ = '-';
          argDec = -argDec;
        }
        else if (argDec == 0)
          *out++ = '0';

        t = argDec;
        cnt = 0;
        while (t) {
          num[cnt++] = argDec % 10 + '0';
          t = t / 10;
        }
        
        while (cnt > 0) {
          *out++ = num[--cnt];
        }
      }
      else if (op == 's') {
        argStr = va_arg(ap, char*);
        while (*argStr != '\0') {
          *out = *argStr;
          out++;
          argStr++;
        }
      }
    }
  }
  *out++ = 0;
  va_end(ap);

  return out - pri;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
