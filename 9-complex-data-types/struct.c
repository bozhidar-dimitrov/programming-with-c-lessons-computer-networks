#include <stdio.h>
#include <string.h>

typedef struct student {
  int number;
  char fullname[50];
  float averageGrade;
} Student;

void printStudent(struct student st) {
  printf("Number: %d\n", st.number);
  printf("Full name: %s\n", st.fullname);
  printf("Average grade: %f\n", st.averageGrade);
}

int main(void) {

  struct student ivan;
  ivan.number = 14;
  ivan.averageGrade = 5.5;
  strcpy(ivan.fullname, "Ivan Dimitrov Georgiev");

  struct student students[26];
  students[13] = ivan;

  printStudent(ivan);

  Student anna;
  anna.number = 1;
  anna.averageGrade = 4.75;
  strcpy(anna.fullname, "Anna Nikolaeva Koleva");

  return 0;
}