#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static void putchar(char ch, char *str, int to_string) {
  if (to_string) *str++ = ch;
  else putch(ch);
}

static int print(const char *fmt, va_list *ap, char *str, int to_string) {
  size_t i;
  size_t len = strlen(fmt);
  int flag = 0, argDec;
  char op;
  char *argStr = NULL;
  char num[50];
  int t, cnt, chnum = 0;  // 临时变量
  for (i = 0; i < len; i++) {
    if (fmt[i] == '%') {
      flag = 1;
    }
    else if (!flag) {
      putchar(fmt[i], str, to_string);
      chnum++;
    }
    else {
      flag = 0;
      op = fmt[i];
      if (op == 'd') {
        argDec = va_arg(*ap, int);
        if (argDec < 0) {
          argDec = -argDec;
          putchar('-', str, to_string);
          chnum++;
        }
        else if (argDec == 0) {
          putchar('0', str, to_string);
          chnum++;
        }

        t = argDec;
        cnt = 0;
        while (t) {
          num[cnt++] = argDec % 10 + '0';
          t = t / 10;
        }
        
        while (cnt > 0) {
          putchar(num[--cnt], str, to_string);
          chnum++;
        }
      }
      else if (op == 's') {
        argStr = va_arg(*ap, char*);
        while (*argStr != '\0') {
          putchar(*argStr, str, to_string);
          argStr++;
          chnum++;
        }
      }
    }
  }
  if(to_string) *str++ = 0;
  return chnum;
}


int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int chnum = 0;
  chnum = print(fmt, &ap, NULL, false);
  va_end(ap);
  return chnum;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int chnum = 0;
  chnum = print(fmt, &ap, out, true);
  va_end(ap);
  panic("print");
  return chnum;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
