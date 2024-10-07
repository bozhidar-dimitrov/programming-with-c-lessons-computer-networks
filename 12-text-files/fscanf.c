#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }

  int number;
  char name[10];
  double averageGrade;
  fscanf(file, "%d %s %lf", &number, name, &averageGrade);

  printf("%d %s %lf\n", number, name, averageGrade);

  fclose(file);

  return 0;
}