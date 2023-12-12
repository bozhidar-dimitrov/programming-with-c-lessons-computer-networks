#include <stdio.h>

int main(void) {

  #ifndef WINDOWS
  printf("We are not under windows\n");
  #endif

  printf("End of program\n");

  return 0;
}