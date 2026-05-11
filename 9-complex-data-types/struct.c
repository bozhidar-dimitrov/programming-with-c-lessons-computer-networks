#include <stdio.h>
#include <string.h>

struct student {
  char name[50];
  unsigned int numberInClass;
  float averageGrade;
};

int main(void) {

  struct student ivan;
  ivan.numberInClass = 16;
  ivan.averageGrade = 5.5;
  strcpy(ivan.name, "Ivan");

  printf("Number:%d\n", ivan.numberInClass);
  printf("Name:%s\n", ivan.name);
  printf("Average grade:%f\n", ivan.averageGrade);

  return 0;
}