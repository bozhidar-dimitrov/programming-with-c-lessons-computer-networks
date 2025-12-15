#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {

  //This is our array:
  int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};

  #ifdef WINDOWS
  int myVar = 5;
  #else
  int otherVar = 15;
  #endif

  return 0;
}