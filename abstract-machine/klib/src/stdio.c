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
  char *pri = out;
  va_list ap;
  va_start(ap, fmt);
  assert(out != NULL && fmt != NULL);
  size_t i;
  size_t len = strlen(fmt);
  int flag = 0, t;
  char op, c;
  char *str = NULL;
  for (i = 0; i < len; i++) {
    if (fmt[i] == '%') {
      flag = 1;
    }
    else if (!flag) {
      *out = fmt[i];
      out++;
    }
    else {
      op = fmt[i];
      if (op == 'd') {
        t = va_arg(ap, int);
        while (t) {
          c = t % 10 + '0';
          *out = c;
          out++;
          t = t / 10;
        }
      }
      else if (op == 's') {
        str = va_arg(ap, char*);
        while (*str != '\0') {
          *out = *str;
          out++;
          str++;
        }
      }
    }
  }
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
