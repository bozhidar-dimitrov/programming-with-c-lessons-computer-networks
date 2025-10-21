#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int number;
  float averageGrade;
};

typedef struct {
  char name[50];
  int number;
  float averageGrade;
} StudentStruct;

int main(void) {

  struct Student ivan;
  ivan.number = 12;
  ivan.averageGrade = 5.5;
  strcpy(ivan.name, "Ivan");

  printf("Number:%d\n", ivan.number);
  printf("Name:%s\n", ivan.name);
  printf("Average grade:%f\n", ivan.averageGrade);

  StudentStruct alexandar;

  return 0;
}