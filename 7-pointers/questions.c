#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a;

  printf("%d\n", *p);

  const int * ptr = &a;
  //*ptr = 10;
  

  return 0;
}