#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static int chnum = 0;

static void putchar(char ch, char **str, int to_string) {
  if (to_string) {**str = ch; (*str)++;}
  else putch(ch);
  chnum++;
}

static void printi(int64_t i, int base, int sign, char **str, int to_string) {
  char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
  if (sign && base == 10 && i < 0) {
    i = -i;
    putchar('-', str, to_string);
  }
  else if (i == 0) {
    putchar('0', str, to_string);
  }

  int64_t t = i, cnt = 0;
  uint64_t u = (uint64_t)i;
  char num[100];
  if (sign) {
  	while (t > 0) {
      num[cnt++] = hex[t % base];
      t = t / base;
    }
  }
  else {
  	while (u != 0) {
      num[cnt++] = hex[u % base];
	  u = u / base;
  	}
  }
  
//  for (int i = 0; i < cnt; i++) {
//  	printf("%c ", num[i]);
//  }
//  puts("");

  while (cnt > 0) {
    putchar(num[--cnt], str, to_string);
  }
}

static void print(const char *fmt, va_list *ap, char **str, int to_string) {
  size_t i;
  size_t len = strlen(fmt);
  int flag = 0, argDec;
  char op;
  char *argStr = NULL;
  char argChar;
  uint64_t argHex;
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
      switch(op) {
        case 'd':
          argDec = va_arg(*ap, int);
          printi(argDec, 10, 1, str, to_string);
          break;
        case 's':
          argStr = va_arg(*ap, char*);
          while (*argStr != '\0') {
            putchar(*argStr++, str, to_string);
          }
          break;
        case 'c': 
          argChar = va_arg(*ap, int);
          putchar(argChar, str, to_string);
          break;
        case 'p': case 'x':
          argHex = va_arg(*ap, uint64_t);
          printi(argHex, 16, 0, str, to_string);
          break;
        default: break;
      }
    }
  }
  if(to_string) {
    **str = 0;
    (*str)++;
  }
}


int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  chnum = 0;
  print(fmt, &ap, NULL, 0);
  va_end(ap);
  return chnum;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  chnum = 0;
  print(fmt, &ap, &out, 1);
  printf("%s\n", out);
  va_end(ap);
  return chnum;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
