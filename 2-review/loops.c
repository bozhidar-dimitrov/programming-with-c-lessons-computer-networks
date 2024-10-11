#include <stdio.h>

int main(void) {

  int i = 6;
  while (i <= 5) {
    printf("%d\n", i);
    i++;
  }

  i = 6;
  do {
    printf("%d\n", i);
    i++;
  } while (i <= 5);

  for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  return 0;
}