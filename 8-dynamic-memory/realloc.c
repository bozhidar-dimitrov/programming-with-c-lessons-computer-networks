#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%d", &gradesCount);

  //we need memory for array of type float and we need gradesCount 
  float * grades = calloc(gradesCount, sizeof(float));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
  }

  float sum = 0;
  for (int i = 0; i < gradesCount; i++) {
    printf("Grade %d: %.2f\n", i+1, grades[i]);
    sum += grades[i];
  }

  float averageGrade = sum / gradesCount;
  printf("Average grade: %.2f\n", averageGrade);

  int additionalGrades = 0;
  printf("Please enter the number of additional grades:");
  scanf("%d", &additionalGrades);

  int totalGrades = gradesCount + additionalGrades;
  grades = realloc(grades, sizeof(float) * totalGrades);
  if (grades == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  for (int i = gradesCount; i < totalGrades; i++) {
    printf("Please enter grade %d:", i+1);
    scanf("%f", &grades[i]);
  }

  sum = 0;
  for (int i = 0; i < totalGrades; i++) {
    printf("Grade %d: %.2f\n", i+1, grades[i]);
    sum += grades[i];
  }

  averageGrade = sum / totalGrades;
  printf("Average grade: %.2f\n", averageGrade);

  return 0;
}