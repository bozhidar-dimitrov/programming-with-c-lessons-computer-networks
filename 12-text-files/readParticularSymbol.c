#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("simple.txt", "r");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  char c;
  int index = 1;
  //Moves the cursor before the 12 character a
  fseek(file, 11, SEEK_SET);

  //Reads the 12 character
  c = getc(file);
  printf("%c\n", c);

  //Returns the cursor at the beginning of the file
  rewind(file);

  fclose(file);

  return 0;
}