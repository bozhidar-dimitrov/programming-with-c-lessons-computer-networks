#include <stdio.h>

//Passing arguments by value;
int sum(int a, int b) {
  int c = a + b;
  return c;
}

void printHello() {
  printf("Hello, world\n");
}

//Passing arguments by reference
void sortArray(int arr[], int n) {
  for (int i = 0; i < n; i++){
    //do something with the array;
  }
}

int main(void) {

  int result1 = sum(5, 6);
  printf("%d\n", result1);

  printHello();
  int array[] = {1, 2, 3, 4, 5};
  sortArray(array, 5);
  //array will be changed

  return 0;
}