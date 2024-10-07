#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("diary.txt", "r");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  char line[100];
  while (fgets(line, 100, file) != NULL) {
    printf("%s", line);
  }

  fclose(file);

  return 0;
}