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

int main(void) {

  int arr[10] = {[5] = 7, [3] = 2, [6 ... 9] = 55};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr1[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  int arr3[10] = {[5]7, [3]2, [6 ... 9]55};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");

  //Initializing a structure using dedicated initializer
  struct student petar = {
    .name = "Petar",
    .averageGrade = 5.5,
    .number = 21
  };

  struct studentClass g9 = {
    .homeroomTeacher = {
      .firstname = "Madlen",
      .surname = "Mihailova",
      .teachingSubject = "Physical education"
    },
    .classLetter = 'g',
    .classNumber = 9,
    .students = {
      [0] = petar,
      [1] = {
        .name = "Yana",
        .number = 26,
        .averageGrade = 5.5
      }
    }
  };

  //Initializing a structure using dedicated initializer: alternative syntax
  struct student petarModev = {
    name:"Petar",
    averageGrade: 5.5,
    number: 22
  };

  return 0;
}