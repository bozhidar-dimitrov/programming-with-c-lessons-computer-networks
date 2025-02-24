#include <stdio.h>

void foo(int x) {
  x = 15;
}

void foo1(int * x) {
  *x = 15;
}

int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int x = 20;
  foo(x);
  printf("X:%d\n", x);

  foo1(&x);
  printf("X:%d\n", x);

  int a = 10;
  int b = 30;
  swap(&a, &b);
  printf("A:%d, B:%d\n", a, b);

  return 0;
}