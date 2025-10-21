#include <stdio.h>
#include <string.h>

int main(void) {

  char name[5] = {'I', 'v', 'a', 'n', '\0'};
  for (int i = 0; i < 4; i++) {
    printf("%c", name[i]);
  }
  printf("\n");

  char name1[5] = "Ivan";
  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c", name[i]);
  }
  printf("\n");

  char name2[] = "Ivan";
  printf("%s\n", name2);

  char name3[5];
  strcpy(name3, "Ivan");

  int x = 65;
  printf("%c\n", x);

  char c = 'a';
  printf("%d\n", c);

  return 0;
}