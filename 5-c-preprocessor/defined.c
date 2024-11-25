#include <stdio.h>

#define BUFFER_SIZE 1024

int main(void) {

  #if BUFFER_SIZE > 512 && defined __linux__
  printf("We are under OS with buffers size > 512");
  #endif

  #if defined __linux__
  printf("Linux is defined");
  #endif

  #ifdef __linux__
  printf("Linux is defined");
  #endif

  return 0;
}