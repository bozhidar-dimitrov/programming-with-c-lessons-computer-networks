#include <stdio.h>

//#define WINDOWS 1

int main(void) {

  #ifdef WINDOWS 
  printf("We are under windows\n");
  #endif

  printf("End of program\n");

  int windows = 1;
  //Always executes
  if (windows == 1) {
    printf("we are under windows\n");
  } else {
    printf("we are under linux\n");
  }

  return 0;
}