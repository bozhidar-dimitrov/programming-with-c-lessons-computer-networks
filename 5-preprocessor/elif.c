#include <stdio.h>

//_WIN32 - defined if we are under Windows OS
//__linux__ - defined if we are under Linux
//__APPLE__ - defined if we are under MAC OS

int main(void) {

  #ifdef _WIN32
  printf("We are under Windows\n");
  #endif

  #ifdef __linux__
  printf("We are under linux\n");
  #endif

  #ifdef __APPLE__
  printf("We are under Apple\n");
  #endif

  //elseif
  int x = 5;
  if (x == 1) {
    //
  } else if (x == 2) {
    //
  } else if (x == 3) {
    //
  } else {
    //
  }

  #ifdef _WIN32
  printf("We are under windows \n");
  int x = 10;
  #elif defined __linux__
  printf("We are under linux\n");
  int y = 11;
  #elif defined __APPLE__
  printf("We are under Mac OS");
  #else 
  printf("we are under some other OS");
  #endif

  return 0;
}