#include <stdio.h>

struct student {
  char name[50];
  unsigned int numberInClass;
  float averageGrade;
};

int main(void) {

  struct student ivan;
  ivan.numberInClass = 16;
  ivan.averageGrade = 5.5;

  return 0;
}