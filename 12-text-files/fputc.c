#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("simple.txt", "w");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  char text[] = "This is \n a text \n with newlines \n";
  for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] != '\n') {
      fputc(text[i], file);
    }
  }

  fclose(file);

  return 0;
}