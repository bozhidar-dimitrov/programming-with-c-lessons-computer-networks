#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};

  printf("&arr[0] %p\n", &arr[0]);
  printf("&arr[1] %p\n", &arr[1]);
  printf("&arr[2] %p\n", &arr[2]);

  printf("arr %p\n", arr);

  int * p = arr;
  for (int i = 0; i < 3; i++) {
    printf("%d ", p[i]);
  }

  return 0;
}