#include <stdio.h>

#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))

int main(void) {

  printf("SQUARE of 5:%d\n", SQUARE(5));
  printf("SQUARE of 2+1:%d\n", SQUARE(2+1));
  printf("SQUARE_SAFE of 2+1:%d\n", SQUARE_SAFE(2+1));

  return 0;
}