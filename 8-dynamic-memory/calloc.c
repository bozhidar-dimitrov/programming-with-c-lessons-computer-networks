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

  return 0;
}