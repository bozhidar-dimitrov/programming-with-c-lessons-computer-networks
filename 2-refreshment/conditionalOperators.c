#include <stdio.h>

int main(void) {

  int a = 5;
  if (a > 6) {
    printf("A is greater than 6\n");
  }

  if (a > 6) 
    printf("A is greater than 6\n");
    printf("Something else \n");

  if (a > 6) {
    printf("A is greater than 6\n");
  } else {
    printf("A is not greater than 6\n");
  }

  int a1 = 5;
  int b1 = 7;
  int c1 = 3;
  if (a1 > b1) {
    if (a1 > c1) {
      printf("A is the greatest:%d\n", a1);
    } else {
      printf("C is the greatest:%d\n", c1);
    }
  } else {
    if (b1 > c1) {
      printf("B is the greatest:%d\n", b1);
    } else {
      printf("C is the greatest: %d\n", c1);
    }
  }

  int b = 3;
  //if b == 1 => one
  //if b == 3 => three
  //if b == 5 => five
  //else => something else

  if (b == 1) {
    printf("one\n");
  } else {
    if ( b == 3) {
      printf("three\n");
    } else {
      if (b == 5) {
        printf("five\n");
      } else {
        printf("Something else\n");
      }
    }
  }

  if (b == 1) {
    printf("one\n");
  } else if ( b == 3) {
    printf("three\n");
  } else if (b == 5) {
    printf("five\n");
  } else {
    printf("Something else\n");
  }

  printf("Switch:\n");
  switch(b) {
    case 1: 
      printf("one\n");
      break;
    case 3:
      printf("three\n");
      break;
    case 5:
      printf("five\n");
      break;
    default: 
      printf("Something else\n");
  }

  
  return 0;
}