#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /*
    w - open for writing
    r - open for reading
    a - open for appending
    w+ - open for writing and reading
    r+ - open for reading and writing
    a+ - open for appending and reading
  */
  FILE * file = fopen("simple.txt", "a");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  //Working with file

  fclose(file);

  return 0;
}