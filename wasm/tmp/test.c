#include <stdio.h>
#include <string.h>

#define BUFSIZE 16
int main() {
  char buf1[BUFSIZE];
  char buf2[BUFSIZE] = "buf2buf2buf2buf2";
  char * buf3 = "123456789abcdefghijklmnopqrstuvwxyz";
  strncpy(buf1, buf3, 16);
  printf("%s\n", buf1);
  printf("%s\n", buf2);
  printf("%s\n", buf3);
}
