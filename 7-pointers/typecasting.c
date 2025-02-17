#include <stdio.h>

int main(void) {

  int a = 10;

  //Implicit typecasting
  double x = a;

  printf("X:%lf\n", x);

  int a1 = 15;

  //Explicit typecasting
  double x1 = (double) a1;

  double x2 = 10.5;

  printf("Int value: %d\n", (int)x2);

  return 0;
}