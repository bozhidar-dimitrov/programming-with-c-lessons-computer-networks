#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradescount = 0;
  printf("Please enter grades count: ");
  scanf("%d", &gradescount);

  //We want to allocate memory for array of type float, with size of 5
  float * grades = (float *)malloc(gradescount * sizeof(float)); //Allocates a memory for an array of 5 float elements
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }
  for (int i = 0; i < gradescount; i++){
    grades[i] = i;
  }

  for (int i = 0; i < gradescount; i++){
    printf("%f ", grades[i]);
  }

  printf("Enter additionl grades count:");
  int additionalgradescount = 0;
  scanf("%d", &additionalgradescount);

  grades = (float *)realloc(grades, sizeof(float)*(gradescount + additionalgradescount));
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }
  for (int i = gradescount; i < gradescount + additionalgradescount;i++) {
    grades[i] = -i;
  }

  for (int i = 0; i < gradescount + additionalgradescount;i++) {
    printf("%f ", grades[i]);
  }

  free(grades);

  return 0;
}