#include <stdio.h>

int sum(int a, int b) {
  int result = a + b;
  return result;
}

void prettyPrint(int a) {
  printf("!%d!", a);
}

int main(void) {

  int c = sum(10, 15);
  printf("%d\n", c);

  printf("%d\n", sum(7, 6));

  int x = 15;
  prettyPrint(x);

  return 0;
}