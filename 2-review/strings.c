#include <stdio.h>

int main(void) {

  char name[5] = {'I', 'v', 'a', 'n', '\0'};
  char name1[5] = "Ivan";
  char name2[] = "Ivan";

  for (int i = 0; name[i] != '\0'; i++){
    printf("%c\n", name[i]);
  }

  printf("%s\n", name2);

  return 0;
}