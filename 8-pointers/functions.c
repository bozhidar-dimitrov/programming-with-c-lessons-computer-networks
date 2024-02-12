#include <stdio.h>

void foo1(int a) {
  a = 5;
}

void foo2(int * a) {
  *a = 5;
}

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int x = 10;
  foo1(x);
  printf("%d\n", x);

  foo2(&x);
  printf("%d\n", x);

  int a = 7;
  int b = 12;
  swap(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);

  scanf("%d", &a);

  return 0;
}