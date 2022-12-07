#include <stdio.h>
#include "emscripten.h"

EMSCRIPTEN_KEEPALIVE
int test(int * i) {
  printf("%d\n", *i);
  return 10;
}

EMSCRIPTEN_KEEPALIVE
char * test01() {
  char * str = "Hello";
  return str;
}
