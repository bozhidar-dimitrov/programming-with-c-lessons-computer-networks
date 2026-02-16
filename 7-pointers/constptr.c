#include <stdio.h>

int main(void) {

  const int a = 15;
  //Not allowed:
  //a = 30;

  int b = 30;
  b = 45;

  int * p = &a;
  //Very bad practice but allowed:
  *p = 30;
  printf("a:%d\n", a);

  //Указател към константа
  const int * p1 = &a;
  //Not allowed by the compiler:
  //*p1 = 50;

  //Allowed: changing the pointer to another variable
  p1 = &b;
  //Reading variable value is allowed:
  printf("Value of the variable to which the pointer points: %d", *p1);

  int * const p2 = &b;

  //Allowed: changing the value of the variable via the pointer
  *p2 = 7;
  printf("Value of the variable to which the pointer points: %d", *p2);

  //Not allowed:
  //p2 = &a;

  const int * const p3 = &a;

  //Not allowed:
  //*p3 = 7;

  //Not allowed:
  //p3 = &b;

  //Usual usage of constant pointers;
  const char * str = "Hello world";

  return 0;
}