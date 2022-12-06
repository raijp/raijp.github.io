#include <stdio.h>
#include <string.h>

int test(int * i) {
  char * str = "Here is in test()";
  printf("%s\n", str);
  printf("%d\n", i[0]);
  return i[0];
}

int main() {
  char * str = "Here is in main()";
  printf("%s\n", str);
  return 0;
}
