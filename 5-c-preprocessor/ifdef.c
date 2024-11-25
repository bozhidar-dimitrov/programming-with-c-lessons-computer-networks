#include <stdio.h>

//#define WINDOWS 1
#define LINUX 1

#ifdef WINDOWS
#include <conio.h>
#endif

int main(void) {

  #ifdef WINDOWS
  int c = getch();
  #endif

  #ifdef LINUX
  int c = getc(stdin);
  #endif

  return 0;
}