#include <stdio.h>

int main(void) {

  char x = 97;

  printf("Address: %p\n", &x);

  size_t size = sizeof(x);
  printf("Size of x: %zu\n", size);

  size_t sizeOfInt = sizeof(int);
  printf("Size of int: %zu\n", sizeOfInt);

  return 0;
}