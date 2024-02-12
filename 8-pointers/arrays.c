#include <stdio.h>

int main(void) {

  int arr[2] = {4, 5};
  printf("%p\n", &arr[0]);
  printf("%p\n", &arr[1]);

  char arr2[2] = {4, 5};
  printf("%p\n", &arr2[0]);
  printf("%p\n", &arr2[1]);

  int *p = arr;
  printf("Using pointer: %p\n", p);
  printf("First element: %d\n", p[0]);

  return 0;
}