#include <stdio.h>

int main(void) {

  int * p = NULL;

  //Dereferencing NULL pointer gives Segmentation fault:
  //printf("*p: %d\n", *p);

  if (p == NULL) {
    printf("We cannot use the pointer\n");
  } else {
    printf("*p: %d\n", *p);
  }

  int a = 10;

  p = &a;

  return 0;
}