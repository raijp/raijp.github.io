#include <stdio.h>
#include <stdlib.h>
#include "emscripten.h"

EMSCRIPTEN_KEEPALIVE
int test01(int * a) {
  printf("%p\n", a);
  return *a;
}

EMSCRIPTEN_KEEPALIVE
int test02(int * a, int * b) {
  printf("%p\n", a);
  printf("%p\n", b);
  return *a;
}

EMSCRIPTEN_KEEPALIVE
char * test03() {
  char * str = "Hello";
  return str;
}

EMSCRIPTEN_KEEPALIVE
char * test04(char * a, char * b) {
  printf("%s\n", a);
  printf("%d\n", atoi(b));
  return a;
}
