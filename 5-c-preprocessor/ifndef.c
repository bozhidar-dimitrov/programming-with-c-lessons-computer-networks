#include <stdio.h>

int main(void) {

  #ifndef _WIN32
  printf("We are not under Windows \n");
  #endif

  return 0;
}