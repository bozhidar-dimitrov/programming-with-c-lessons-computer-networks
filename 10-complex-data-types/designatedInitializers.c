#include <stdio.h>

typedef struct student {
  char fullname[60];
  int number;
  float averageGrade;
} Student;

typedef struct teacher {
  char fullname[60];
  char teachingSubject[60];
} Teacher;

typedef struct studentClass {
  int numberOfStudents;
  Student students[30];
  char classLetter;
  int classNumber;
  Teacher homeroomTeacher;
} StudentClass;

int main(void) {

  int array[10] = {[3] = 7, [5] = 9, [7 ... 9] = 15};
  for (int i = 0; i < 10; i++) {
    printf("array[%d] == %d, ", i, array[i]);
  }

  printf("\n");

  int array1[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("array[%d] == %d, ", i, array1[i]);
  }

  //Alternative syntaxis of array designated initializers
  int array[10] = {[3]7, [5]9, [7 ... 9]15};

  printf("\n");

  Student ilia = {
    .number = 1,
    .fullname = "Ilia",
    .averageGrade = 5.25
  };

  //Alternative syntaxis of structure designated initializers
  Student maya = {
    number: 15,
    fullname: "Maya",
    averageGrade: 5.25
  };

  return 0;
}