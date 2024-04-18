#include <stdio.h>
#include <string.h>

struct Student {
  //Properties of the structure - член променливи на български
  float averageGrade;
  int number;
  char name[30];
};

void printStudentData(float averageGrades[], int numbers[], char names[][30], int studentsCount) {
  //Print the student data
}

void printStudentData2(struct Student students[], int studentCount) {
  //Print student data
}

int main(void) {
  int studentCount = 26;

  //If we don't have structures
  float averageGrades[26];
  int numbers[26];
  char names[26][30];
  printStudentData(averageGrades, numbers, names, studentCount);
  
  //Using structures
  struct Student students[26];
  printStudentData2(students, studentCount);

  struct Student georgi;
  georgi.number = 9;
  georgi.averageGrade = 5.25;
  strcpy(georgi.name, "Georgi");

  printf("Name:%s\n", georgi.name);

  students[0] = georgi;
  //Accessing the student from the array of students
  printf("Name:%s\n", students[0].name);

  //This is wrong:
  //Student.averageGrade = 5.35;

  //We need to create a variable of the structure first
  struct Student ivan; //Create a variable
  ivan.averageGrade = 5.35; //Access the property of the variable not of the structure



  return 0;
}