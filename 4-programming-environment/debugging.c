#include <stdio.h>

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++){
    for (int j = 0; j < size - 1 - i; j++){
      if (arr[j] < arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main(void) {

  int arr[10] = {2, 5, 3, 9, 7, 6, 4, 8, 1, 0};
  int n = 10;
  bubbleSort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}