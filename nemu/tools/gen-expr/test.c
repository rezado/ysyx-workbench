#include <stdio.h>
#include <errno.h>
int main() {
  unsigned result = 1 / 0;
  printf("%u", result);
  return 0;
}