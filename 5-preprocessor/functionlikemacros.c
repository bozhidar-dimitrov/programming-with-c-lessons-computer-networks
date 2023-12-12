#include <stdio.h>

#define SQUARE(A) A * A
#define SQUARE2(A) ((A) * (A))

int main(void) {

  //int result = 5 * 5;
  int result = SQUARE(5);
  printf("Result:%d\n", result);

  //int result2 = 1 + 2 * 1 + 2 
  int result2 = SQUARE(1+2);
  printf("Result:%d\n", result2);

  //int result3 = ((1 + 2) * (1 + 2)) 
  int result3 = SQUARE2(1+2);
  printf("Result:%d\n", result3);

  return 0;
}