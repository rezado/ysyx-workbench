#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i = 0;
  while (s[i] != '\0') i++;
  return i;
}

char *strcpy(char *dst, const char *src) {
  size_t i = 0;
  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  dst[i] = 0;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[i] = src[i];
  for ( ; i < n; i++)
    dst[i] = '\0';

  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t len = strlen(dst);
  size_t i;
  for (i = 0; src[i] != '\0'; i++)
    dst[len + i] = src[i];
  dst[len + i] = '\0';

  return dst;
}

int strcmp(const char *s1, const char *s2) {
  size_t i;
  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0') {
    if (s1[i] > s2[i]) return 1;
    if (s1[i] < s2[i]) return -1;
    i++;
  }

  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;
  for (i = 0; i < n; i++) {
    if (s1[i] == '\0' && s2[i] == '\0')
      break;
    if (s1[i] > s2[i]) return 1;
    if (s1[i] < s2[i]) return -1;
  }

  return 0;
}

void *memset(void *s, int c, size_t n) {
  char *p = (char*)s;
  while (n--)
    *p++ = c;
  
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  void* ret = dst;
  if (dst <= src || ((char *)dst >= (char *)src + n)) {
    // 不重合
    while (n--) {
      *(char *)dst = *(char *)src;
      dst = (char *)dst + 1;
      src = (char *)src + 1;
    }
  }
  else {
    // 重合
    dst = (char *)dst + n - 1;
    src = (char *)src + n - 1;
    while (n--) {
      *(char *)dst = *(char *)src;
      dst = (char *)dst - 1;
      src = (char *)src - 1;
    }
  }
  return ret;
}

void *memcpy(void *out, const void *in, size_t n) {
  char *p = (char*)out;
  char *q = (char*)in;
  while (n--) {
    *p++ = *q++;
  }

  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  if (n == 0) return 0;
  while (n--) {
    if (*(unsigned char *)s1 > *(unsigned char *)s2) return 1;
    if (*(unsigned char *)s1 < *(unsigned char *)s2) return -1;
    s1 = (unsigned char *)s1 + 1;
    s2 = (unsigned char *)s2 + 1;
  }
  return 0;
}

#endif
