#include <stdio.h>

int foo(int a) {
  a = 10;
}

int foo2(int * a) {
  *a = 10;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int a = 5;
  foo(a);
  printf("%d\n", a);

  int a1 = 5;
  foo2(&a1);
  printf("%d\n", a1);

  int x = 7;
  int y = 10;
  swap(&x, &y);
  printf("X:%d, Y:%d\n", x, y);

  return 0;
}