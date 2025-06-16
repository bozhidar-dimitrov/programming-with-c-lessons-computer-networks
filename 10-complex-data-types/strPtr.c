#include <stdio.h>

typedef struct student {
  char fullname[60];
  int number;
  float averageGrade;
} Student;

void printStudent(Student * student) {
  printf("--------------------------\n");
  printf("Number: %d\n", (*student).number);
  printf("Fullname: %s\n", (*student).fullname);
  printf("Average grade: %f\n", student->averageGrade);
  printf("--------------------------\n");
}

int main(void) {

  Student rayan = {
    .fullname = "Rayan",
    .number = 24,
    .averageGrade = 5
  };

  Student * ptr = &rayan;

  printStudent(ptr);

  return 0;
}