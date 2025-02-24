#include <stdio.h>

void printElements(int * arr, int size){
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main(void) {

  int a = 10;
  printf("%p", &a);

  char arr1[3] = {1, 2, 3};
  printf("arr1[0] - %p\n", &arr1[0]);
  printf("arr1[1] - %p\n", &arr1[1]);
  printf("arr1[2] - %p\n", &arr1[2]);

  int arr2[3] = {1, 2, 3};
  printf("arr2[0] - %p\n", &arr2[0]);
  printf("arr2[1] - %p\n", &arr2[1]);
  printf("arr2[2] - %p\n", &arr2[2]);

  printf("arr2 - %p\n", arr2);

  int * p = arr2;
  printf("p - %p\n", p);

  printf("p[0] - %d\n", p[0]);
  printf("p[1] - %d\n", p[1]);
  printf("p[2] - %d\n", p[2]);
  printElements(arr2, 3);

  return 0;
}