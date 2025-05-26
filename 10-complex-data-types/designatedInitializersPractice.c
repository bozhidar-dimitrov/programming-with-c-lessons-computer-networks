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

  StudentClass g9 = {
    .homeroomTeacher = {
      .fullname = "Bozhidar",
      .teachingSubject = "C programming",
    },
    .classLetter = 'g',
    .classNumber = 9,
    .numberOfStudents = 3,
    .students = {
      [0] = {
        .number = 1,
        .fullname = "Alek",
        .averageGrade = 5.5
      },
      [1] = {
        .number = 2,
        .fullname = "Aleks",
        .averageGrade = 5.25
      },
      [2] = {
        .number = 3,
        .fullname = "Aleksandar",
        .averageGrade = 5.5
      }
    }
  };

  return 0;
}