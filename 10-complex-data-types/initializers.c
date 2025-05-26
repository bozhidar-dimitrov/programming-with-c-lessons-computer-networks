#include <stdio.h>
#include <string.h>

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

  int array[4] = {1, 2, 3, 4};

  int array2[6] = {1, 2, 3, 4};
  for (int i = 0; i < 6; i++) {
    printf("%d\n", array2[i]);
  }

  int array3[100] = {0};
  for (int i = 0; i < 100; i++) {
    printf("%d ", array3[i]);
  }
  printf("\n");

  Student vladislav;
  vladislav.averageGrade = 5;
  vladislav.number = 12;
  strcpy(vladislav.fullname, "Vladislav");

  Student alexandar = {"Alexandar", 4, 5};

  Teacher inna = {"Inna", "Bulgarian language"};

  StudentClass g9 = {
    3,
    {
      alexandar, 
      vladislav,
      {
        "Aleks",
        2,
        5.25
      }
    },
    'g',
    9,
    inna
  };

  return 0;
}