#include <stdio.h>

#define BUFFER_SIZE 1024

int main(void) {

  #if BUFFER_SIZE > 512
  printf("We are under OS with buffer size > 512");
  #endif

  #if BUFFER_SIZE > 2048
  printf("We are under OS with buffer size > 2048");
  #endif

  return 0;
}