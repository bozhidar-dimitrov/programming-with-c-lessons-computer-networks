#include <stdio.h>

int main(void) {

  int a = 1;

  //0+
  while (a <= 5) {
    printf("%d ", a);
    a++;
  }
  printf("\n");

  a = 1;
  //1+
  do {
    printf("%d ", a);
    a++;
  } while (a <= 5);
  printf("\n");

  for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}