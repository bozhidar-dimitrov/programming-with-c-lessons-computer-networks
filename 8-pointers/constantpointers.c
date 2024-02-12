#include <stdio.h>

int main(void) {

  const int a = 10;
  const int b = 15;
  //a = 15; -> throws compiler error

  //pointer to a constant variable
  const int * p = &a;

  //Allowed
  p = &b;

  //Disallowed - throws compiler error
  //*p = 15;

  int c = 25;
  int d = 30;

  int * const p2 = &c;

  //Allowed
  *p2 = 7;

  //Disallowed - constant pointer
  //p2 = &d;

  const int * const p3 = &a;

  //Disallowed - constant pointer to a constant - cannot change reference value
  *p3 = 77;

  //Disallowed - constant pointer to a constant - cannot change reference
  p3 = &b;

  return 0;
}