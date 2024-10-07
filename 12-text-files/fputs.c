#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("diary.txt", "a");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  //Working with file
  char line[] = "Today it was sunny and hot outside\n";
  fputs(line, file);

  fclose(file);

  return 0;
}