#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("simple.txt", "r");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  char c;
  c = fgetc(file);

  printf("%c", c);

  fclose(file);

  return 0;
}