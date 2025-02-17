#include <stdio.h>

int main(void) {

  int a = 1096;

  int *p = &a;

  printf("Address stored in p: %p\n", p);

  //Dereferencing the pointer:
  printf("The value of the variable to which p points: %d\n", *p);

  *p = 76;
  printf("Value of a variable: %d\n", a);

  return 0;
}