#include <stdio.h>
#include <string.h>

int test01(int * i) {
  char * str = "Here is in test01()";
  printf("%s\n", str);
  printf("%p\n", i);
  return i[0];
}

int test02(int * i) {
  char * str = "Here is in test02()";
  printf("%s\n", str);
  return i[0] + i[1];
}

int main() {
  char * str = "Here is in main()";
  printf("%s\n", str);
  return 0;
}
