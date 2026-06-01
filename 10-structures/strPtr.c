#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS_PER_CLASS 2
#define MAX_TEACHING_SUBJECT_NAME_LENGTH 150

struct student {
  int number;
  char name[MAX_NAME_LENGTH + 1];
  float averageGrade;
};

struct teacher {
  char firstname[MAX_NAME_LENGTH + 1];
  char surname[MAX_NAME_LENGTH + 1];
  char teachingSubject[MAX_TEACHING_SUBJECT_NAME_LENGTH + 1];
};

struct studentClass {
  struct student students[MAX_STUDENTS_PER_CLASS];
  char classLetter;
  int classNumber;
  struct teacher homeroomTeacher;
};

void printStudent(struct student studentToPrint) {
  printf("----------------------------\n");
  printf("Number: %d \n", studentToPrint.number);
  printf("Name: %s \n", studentToPrint.name);
  printf("Average grade: %f \n", studentToPrint.averageGrade);
  printf("----------------------------\n");
}

void printStudentUsingPtr(struct student * studentToPrint) {
  printf("----------------------------\n");
  printf("Number: %d \n", (*studentToPrint).number);
  printf("Name: %s \n", (*studentToPrint).name);
  printf("Average grade: %f \n", (*studentToPrint).averageGrade);
  printf("----------------------------\n");
}

void printStudentUsingPtr2(struct student * studentToPrint) {
  printf("----------------------------\n");
  printf("Number: %d \n", studentToPrint->number);
  printf("Name: %s \n", studentToPrint->name);
  printf("Average grade: %f \n", studentToPrint->averageGrade);
  printf("----------------------------\n");
}

int main(void) {

  struct student ivan = {
    .name = "Ivan",
    .averageGrade = 5.5,
    .number = 16
  };

  printStudent(ivan);
  printStudentUsingPtr(&ivan);
  printStudentUsingPtr2(&ivan);

  return 0;
}