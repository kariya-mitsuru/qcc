#include <stdio.h>

int test() {
  int a, *b;
  a = 10;
  b = &a;
  *b = 100;
  a++;
  return 0;
}
