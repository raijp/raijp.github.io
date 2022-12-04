#include <stdio.h>
#include <string.h>

#define BUFSIZE 32
int main() {
  char buf1[BUFSIZE];
  char buf2[BUFSIZE] = "\"><script>alert()</script>";
  char * buf3 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  strncpy(buf1, buf3, BUFSIZE);
  printf("%s\n", buf1);
  printf("%s\n", buf2);
  printf("%s\n", buf3);
}
