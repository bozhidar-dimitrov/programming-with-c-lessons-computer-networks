#include <stdio.h>
#include <string.h>

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

int main(void) {

  int arr[3] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr2[100];
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  int arr3[5] = {1, 2, 3};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");

  int arr4[100] = {0};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr4[i]);
  }
  printf("\n");


  struct student ivan;
  ivan.number = 1;
  ivan.averageGrade = 5.5;
  strcpy(ivan.name, "Ivan");

  struct student martin = {1, "Martin", 5.5};
  

  struct studentClass g9 = {
    {{1, "Martin", 5.75}, {2, "Ivan", 5.75}},
    'g',
    10,
    {"Bozhidar", "Dimitrov", "Programming"}
  };

  return 0;
}