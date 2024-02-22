#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradescount = 0;
  printf("Please enter grades count: ");
  scanf("%d", &gradescount);
  //We want to allocate memory for array of type float, with size of 5
  float * grades = (float *)calloc(gradescount, sizeof(float)); //Allocates a memory for an array of 5 float elements
  
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


  return 0;
}