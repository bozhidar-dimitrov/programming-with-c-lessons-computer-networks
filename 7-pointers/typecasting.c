#include <stdio.h>

int main(void) {

  int a = 5;
  double b = 6.8;

  //Implicit typecasting
  //In this case int to double typecasting is safe
  b = a;

  //This is not safe typecasting - we lose the floating part
  a = b;

  long a1 = 5;
  int b1 = 10;

  //This is safe - long is big enough to hold double
  a1 = b1;

  //This is not safe - int is not big enough to hold all long values
  b1 = a1;

  int a2 = 5;
  int b2 = 2;
  float c2 = a2 / b2;
  printf("%f\n", c2);

  float a3 = 5;
  int b3 = 2;
  float c3 = a3 / b3;
  printf("%f\n", c3);

  int a4 = 5;
  int b4 = 2;
  float c4 = (float)a4 / b4;
  printf("%f\n", c4);

  long a5 = 10;
  int b5 = 5;
  
  //Explicit typecasting
  a5 = (long)b5;

  return 0;
}