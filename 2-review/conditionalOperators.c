#include <stdio.h>

int main(void) {

  int a = 10;
  if (a < 3) {
    printf("A is less than 3\n");
  } else {
    printf("A is greater than 3\n");
  }

  if (a > 5) {
    printf("A is greater than 5\n");
  }

  //nested if
  if (a > 10) {
    printf("A is greater than 10\n");
  } else {
    if (a > 5) {
      printf("A is greater than 5\n");
    } else {
      printf("A is something else \n");
    }
  }

  //else if
  if (a > 10) {
    printf("A is greater than 10\n");
  } else if (a > 5) {
    printf("A is greater than 5\n");
  } else {
    printf("A is something else \n");
  }

  a = 2;
  switch (a) {
    case 1:
      printf("A is equal to 1\n");
      break;
    case 2:
      printf("A is equal to 2\n");
      break;
    case 3:
      printf("A is equal to 3\n");
      break;
    default:
      printf("A is something else\n");
  }

  return 0;
}