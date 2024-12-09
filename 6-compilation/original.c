#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {

  //This is our array
  int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
  
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d\n",arr[i]);
  }

  #if ARRAY_SIZE > 10
  int someVar = 10;
  #else
  int anotherVar = 5;
  #endif

  return 0;
}