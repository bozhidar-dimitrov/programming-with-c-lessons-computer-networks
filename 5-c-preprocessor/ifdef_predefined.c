#include <stdio.h>


#ifdef _WIN32
#include <conio.h>
#endif

int main(void) {

  #ifdef _WIN32
  int c = getch();
  #endif

  #ifdef __linux__
  int c = getc(stdin);
  #endif

  #ifdef __APPLE__
  printf("OS not supported \n");
  #endif

  return 0;
}