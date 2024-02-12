#include <stdio.h>

int main(void) {

  int a = 10;
  double b = 5.75;

  void * p = &a;
  int * p1 = p;
  printf("%d\n", *(int *)p);

  p = &b;
  *(double *)p = 15;
  printf("%lf\n", *(double *)p);

  //Implicit typecasting
  b = a;
  printf("%lf\n", b);

  //Explicit typecasting
  b = (double)a;
  printf("%lf\n", b);

  return 0;
}