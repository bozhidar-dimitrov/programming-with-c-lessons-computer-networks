#include <stdio.h>

int main(void) {

  int a = 5;
  size_t intsize = sizeof(int);
  printf("The integer has: %zu bytes\n", intsize);
  printf("The char has: %zu bytes\n", sizeof(char));

  long b = 23423423;
  printf("The variable b is: %zu bytes\n", sizeof(b));

  printf("The address of a is: %p\n", &a);

  int * p = &a;
  printf("The value of p is: %p\n", p);

  //Dereferencing the pointer
  printf("The value of the reference variable of p: %d\n", *p);
  *p = 10;
  printf("The value of the reference variable of p: %d\n", *p);
  printf("The value of a is: %d\n", a);

  long * p1 = &b;

  return 0;
}