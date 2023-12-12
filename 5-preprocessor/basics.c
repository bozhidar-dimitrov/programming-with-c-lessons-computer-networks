#include <stdio.h>
#define MACRO 10
#define PRINT printf("Hello, World\n")
#define ARR_SIZE 7

//#define, #ifndef, #ifdef, #if #else, #elif, #endif, #pragma, #undef

int main(void) {

  printf("Value:%d\n", MACRO);
  PRINT;
  PRINT;
  PRINT;

  int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7};
  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}