#include <stdio.h>

int main(void) {

  //Arithmetic operators
  int a = 5;
  int b = a + 3;
  int c = a - 3;
  int d = a / 2;
  int e = a * 2;
  int f = a % 2;

  //Comparison operators
  int a1 = 5;
  int b1 = 10;
  int c1 = a1 < b1;
  int d1 = a1 > b1;
  int e1 = a1 <= b1;
  int f1 = a1 >= b1;
  int g1 = a1 == b1;
  int h1 = a1 != b1;

  //Logical operators
  int a2 = 0;
  int b2 = 1;
  int c2 = a2 && b2;
  int d2 = a2 || b2;
  int e2 = !a2;

  //Assignment operators
  int a3 = 5;
  a3 += 1; //a3 = a3 + 1
  a3 -= 1; //a3 = a3 - 1
  a3 *= 2; //a3 = a3 * 2
  a3 /= 2; //a3 = a3 / 2;
  a3 %= 2; //a3 = a3 % 2;

  a3++; //postfix operation: a3 = a3 + 1
  ++a3; //prefix operation: a3 = a3 + 1

  int b3 = 1;
  int c3 = b3++;
  printf("B3 == %d\n", b3);
  printf("C3 == %d\n", c3);

  int d3 = 1;
  int e3 = ++d3;
  printf("D3 == %d\n", d3);
  printf("E3 == %d\n", e3);

  --a3;
  a3--;

  return 0;
}