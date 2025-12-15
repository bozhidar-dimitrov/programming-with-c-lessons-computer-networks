#include <stdio.h>

#define LINUX 1

#ifdef WINDOWS
#include <conio.h>
#endif

int windows = 1;

int main(void) {

  #ifdef WINDOWS
  char c = getch();
  #endif

  #ifdef LINUX
  int c = getc(stdin);
  #endif


  //This doesn't work - the code always compile
  if (windows == 1) {
    int c = getch();
  }

  printf("User input car: %c\n", c);
  return 0;
}