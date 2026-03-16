#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numberOfElements = 30; 
  int * p = (int *)malloc(numberOfElements * sizeof(int));
  if (p == NULL){
    printf("Error allocating memory\n");
    exit(1);
  }

  //If we forgot to call free(p) here we recaeive a memory leak:
  //free(p);

  int newElementsCount = 40;
  p = (int *)malloc(newElementsCount * sizeof(int));
  if (p == NULL){
    printf("Error allocating memory\n");
    exit(1);
  }

  return 0;
}