#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int studentsCount = 0;
  printf("Enter the number of students:");
  scanf("%d", &studentsCount);

  //VLA - not supported by the latest C standard: 
  //int studentGrades[studentsCount];
  
  //How many bytes we need to store our grades
  //studentsCount * sizeof(float);

  //Malloc asks the operating system to return new dynamic memory
  float * studentGrades = (float *)calloc(studentsCount, sizeof(float));
  if (studentGrades == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  for (int i = 0; i < studentsCount; i++) {
    printf("Please enter student %d grade:", i + 1);
    scanf("%f", &studentGrades[i]);
  }

  float averageGrade = 0;
  for (int i = 0; i < studentsCount; i++) {
    float grade = studentGrades[i];
    averageGrade += grade;
    printf("Student %d grade: %f\n", i+1, grade);
  }
  free(studentGrades);

  averageGrade /= studentsCount;
  printf("Average grade: %f\n", averageGrade);

  return 0;
}