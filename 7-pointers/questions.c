#include <stdio.h>

int main(void) {

  int a = 5;

  int * p = &a;

  printf("%d", *p);

  return 0;
}