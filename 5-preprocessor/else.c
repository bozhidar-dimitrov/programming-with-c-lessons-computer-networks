#include <stdio.h>

#define WINDOWS

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #else
  printf("We are not under Windows\n");
  #endif

  return 0;
}