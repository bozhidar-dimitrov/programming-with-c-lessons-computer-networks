#include <stdio.h>

#define LINUX

#define BUFFER_SIZE 512

int main(void) {

  #ifdef LINUX
  printf("We are under Linux\n");
  #endif

  #if defined LINUX
  printf("We are under Linux \n");
  #endif

  #if ! defined WINDOWS
  printf("We are not under Windows \n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 256
  printf("We are under OS with buffer size > 256\n");
  #endif

  return 0;
}