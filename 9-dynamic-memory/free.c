#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradescount = 0;
  printf("Please enter grades count: ");
  scanf("%d", &gradescount);
  //We want to allocate memory for array of type float, with size of 5
  float * grades = (float *)calloc(gradescount, sizeof(float)); //Allocates a memory for an array of 5 float elements
  
  for (int i = 0; i < gradescount; i++){
    grades[i] = i;
  }

  for (int i = 0; i < gradescount; i++){
    printf("%f ", grades[i]);
  }
  //If you not free the allocated memory before giving another value to the pointer, you can cause a memory leak
  grades = malloc(6*sizeof(float));

  //You always need to free the dynamically allocated memory when you don't need it anymore
  free(grades);
  //free(grades); freeing a memory that is already freed can cause a runtime error


  return 0;
}