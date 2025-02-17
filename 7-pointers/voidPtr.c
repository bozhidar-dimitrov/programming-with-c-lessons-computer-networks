#include <stdio.h>

int main(void) {

  int a = 10;
  double x = 90905.3590090909;
  //The pointer type should be the same as the variable to which it points
  int * p = &a;

  //Very bad practise:
  p = &x;
  printf("%lf\n", *p);

  //The corect:
  double *p1 = &x;
  
  //Void pointers can point to variable of different types;
  void * p2 = &a; 
  p2 = &x;

  //Cannot dereference void pointers:
  //*p2 = 5.35;
  *(double *)p2 = 8.35;
  printf("Double value: %lf\n", *(double *)p2);

  p2 = &a;

  //Implicit typecasting the pointer
  int * p3 = p2; 

  return 0;
}