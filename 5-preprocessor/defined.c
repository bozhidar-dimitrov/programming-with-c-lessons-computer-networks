#include <stdio.h>

#define WINDOWS 0
#define BUFFER_SIZE 1024
#define LINUX

int main(void) {

  #ifdef WINDOWS 
  printf("We are under windows\n");
  #endif

  #if defined WINDOWS
  printf("We are under Windows\n");
  #endif

  #if defined WINDOWS && BUFFER_SIZE > 512
  printf("We are under Windows with buffer size > 512\n");
  #endif

  #if WINDOWS
  printf("This code doesn't compile");
  #endif

  #if defined LINUX
  printf("This macro is defined\n");
  #endif

  return 0;
}