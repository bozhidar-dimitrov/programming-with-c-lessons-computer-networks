#include <stdio.h>

int main(void) {

  size_t sizeOfInt = sizeof(int);
  printf("Size of int: %zu bytes\n", sizeOfInt);

  size_t sizeOfLong = sizeof(long);
  printf("Size of long: %zu bytes\n", sizeOfLong);

  char a = 'x';
  size_t sizeOfChar = sizeof(a);
  printf("Size of char: %zu bytes\n", sizeOfChar);

  int arr[5] = {1, 2, 3, 4, 5};
  size_t sizeOfArr = sizeof(arr);
  printf("Size of arr: %zu bytes\n", sizeOfArr);

  return 0;
}