#include <stdio.h>

int main(void) {

  int a = 5;

  //The pointer type must match the variable type
  int * p = &a;

  double b = 15.4;

  //Allowed but very bad practice:
  p = &b;
  //Doesn't give the correct value:
  printf("B:%lf\n", *p);


  //This is allowed:
  void * ptr = &a;

  //This is also allowed:
  ptr = &b;

  //Dereferencing the void pointer is not allowed
  //by the compiler
  //printf("B:%lf\n", *ptr);

  //But we can dereference it using explicit typecasting
  *((double *)ptr) = 7.7;
  printf("B via ptr:%lf\n", *((double *)ptr));

  double * pp = ptr;
  printf("B via pp:%lf\n", *pp);

  return 0;
}