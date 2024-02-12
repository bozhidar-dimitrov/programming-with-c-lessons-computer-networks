#include <stdio.h>

int main(void) {

  int *p = NULL;
  double *p2 = NULL;

  if (p != NULL) {
    *p = 10;
    printf("%d\n", *p);
  } else {
    printf("Handle this case \n");
  }

  return 0;
}