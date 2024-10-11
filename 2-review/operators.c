#include <stdio.h>

int main(void) {

  //Arithmetic operators
  int a = 10;
  int a1 = a + 5;
  int a2 = a - 10;
  int a3 = a * 7;
  int a4 = a / 5;
  int a5 = a % 3;

  //Logical operators
  int b = 0 && 1;
  int b1 = 0 || 1;
  int b2 = !0;

  //Comparison operators
  int c1 = 5 == 3;
  int c2 = 6 != 4;
  int c3 = 5 > 3;
  int c4 = 5 < 3;
  int c5 = 5 >= 3;
  int c6 = 5 <= 3;

  //Assignement operators
  int d = 7;
  int d = d + 7;
  d += 7;
  d -= 7;
  d *= 7;
  d /= 7;
  d %= 7;

  d += 1;

  d++;
  ++d;

  d = 7;
  int a = d++;
  //a == 7, d == 8;

  d = 7;
  int a = ++d;
  //a == 8, d == 8

  d--;
  --d;

  return 0;
}