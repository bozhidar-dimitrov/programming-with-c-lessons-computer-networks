#include <stdio.h>

int main(void) {

  #ifdef __WIN32
  printf("We are under Windows\n");
  #else
  printf("We are not under Windows\n");
  #endif

  return 0;
}