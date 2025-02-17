#include <stdio.h>

int main(void) {

  int * p = NULL;
  double * p2 = NULL;
  //NULL is defined as ((void *)0) on most machines

  //Dereferencing a NULL pointer throws runtime Segmentation fault error
  //printf("%lf\n", *p2);

  if (p == NULL) {
    printf("We have problems with the memory \n");
  } else {
    printf("The value of p is %d", *p);
  }

  return 0;
}