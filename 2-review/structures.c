#include <stdio.h>
#include <string.h>

struct Student {
  char name[100];
  int number;
  float averageGrade;
};

int main(void) {

  struct Student ivan;
  ivan.number = 5;
  ivan.averageGrade = 5.5;
  strcpy(ivan.name, "Ivan");

  printf("Name: %s\n", ivan.name);
  printf("Number: %d\n", ivan.number);
  printf("Average grade: %f\n", ivan.averageGrade);

  return 0;
}