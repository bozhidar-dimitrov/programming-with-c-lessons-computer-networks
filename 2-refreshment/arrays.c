#include <stdio.h>

void printArray(int arr[], int size){
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void fillArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i+1;
  }
}

int main(void) {

  int arr[5];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  int arr1[5] = {1, 2, 3, 4, 5};
  printArray(arr1, 5);

  //When using literals we can skip the size of the array -
  //It will be calculated from the literal elements
  int arr2[] = {1, 2, 3, 4, 5};

  int arr3[100];
  fillArray(arr3, 100);

  printArray(arr3, 100);

  return 0;
}