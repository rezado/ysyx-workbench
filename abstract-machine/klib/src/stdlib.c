#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
static char *hbrk = NULL;
#endif

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()

  #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
    if (!hbrk) {
      hbrk = (void*)ROUNDUP(heap.start, 8);
      printf("initial:hbrk %x start %x\n", hbrk, heap.start);
    }
    size = (size_t)ROUNDUP(size, 8);
    printf("size:%d hbrk:%x\n", size, hbrk);
    assert((size & 1) == 0);
    char *old = hbrk;
    hbrk += size;
    assert((uintptr_t)heap.start <= (uintptr_t)hbrk && (uintptr_t)hbrk < (uintptr_t)heap.end);
    for (uint64_t *p = (uint64_t *)old; p != (uint64_t *)hbrk; p++) {
      *p = 0;
    }
    assert((uintptr_t)hbrk <= (uintptr_t)heap.end);
    return old;
  #endif
    return NULL;
}

void free(void *ptr) {
}

#endif
