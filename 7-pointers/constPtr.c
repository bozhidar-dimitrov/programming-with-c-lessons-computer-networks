#include <stdio.h>

int main(void) {

  const int a = 10;
  //The following is not allowed:
  //a = 15;

  int * p1 = &a;
  //Sadly this is allowed:
  *p1 = 88;
  printf("%d", *p1);

  int a1 = 10;
  int b1 = 15;

  //Pointer to a constant:
  const int * p = &a1;

  //This is allowed:
  p = &b1;
  //This is not allowed:
  //*p = 35;

  int * const p2 = &a;
  //This is allowed:
  *p2 = 15;

  //This is not allowed:
  //p2 = &b1;

  const int * const p3 = &a;
  
  //Not allowed:
  //p3 = &b1;

  //Not allowed:
  //*p3 = 15;

  return 0;
}