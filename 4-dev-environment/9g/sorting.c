#include <stdio.h>

void bubblesort(int arr[], int arrlen) {
  int issorted = 0;
  for (int i = 0; i < arrlen - 1 && issorted == 0; i++) {
    issorted = 1;
    for (int j = 0; j < arrlen - 1 - i; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        issorted = 0;
      }
    }
  }
}

int main(void) {
  int arr[7] = {2, 3, 5, 1, 10, 6, 7};
  int arrlen = 7;

  bubblesort(arr, arrlen);

  for (int i = 0; i < arrlen; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}