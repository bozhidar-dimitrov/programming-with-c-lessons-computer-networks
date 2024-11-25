#include <stdio.h>

#define BUFFER_SIZE 1024
#define WINDOWS 0

int main(void) {

  #if BUFFER_SIZE > 512
  printf("We are under OS with buffers size > 512");
  #endif

  //Doesn't reach compilation
  #if WINDOWS
  printf("We are under Windows");
  #endif

  //Reaches compilation
  #ifdef WINDOWS
  printf("We are under Windows");
  #endif

  return 0;
}