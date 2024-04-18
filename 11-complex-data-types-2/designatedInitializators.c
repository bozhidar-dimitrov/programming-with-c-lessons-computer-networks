#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

int main(void) {

  //A try to set all elements of an array to 1
  int arr[100] = {1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  //Initializing array using designated initializers
  int arr2[10] = {[3] = 6, [1] = 9, [6 ... 9] = 99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  //Alternative syntax of doing the same
  int arr3[10] = {[3]6, [1]9, [6 ... 9]99};

  int arr4[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr4[i]);
  }

  printf("\n");

  //Using designated initializers to initialize students
  Student aleksi = {.number = 1, .name = "Aleksi"};

  //Alternative syntax of doing the same
  Student anna = {
    number:1, 
    name:"Aleksi"
  };

  return 0;
}