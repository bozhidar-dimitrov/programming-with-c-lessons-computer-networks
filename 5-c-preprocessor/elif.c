#include <stdio.h>

int main(void) {

  #ifdef _WIN32
  printf("This is code for WIndows\n");
  #elif defined __linux__
  printf("This is code for linux");
  #elif defined __APPLE__
  printf("This is code for MAC");
  #else
  printf("This is code for another OS");
  #endif

  return 0;
}