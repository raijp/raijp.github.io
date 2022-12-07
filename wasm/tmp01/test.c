#include <stdio.h>

char * test01() {
  char * str = "Hello";
  return str;
}

int main() {
  printf("%s\n", test01());
  return 0;
}
