#include <stdio.h>

//Predefined macros
//__FILE__ - name of the file being processed, - string
//__LINE__ - the number of line of the macro - int
//__DATE__ - the date of preprocessing - string
//__TIME__ - the time of the preprocessing - string

#define CHECK_ERROR(X) if (X == 0) printf("There is an error on line %d", __LINE__)

int main(void) {

  printf("File name:%s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Date:%s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  int i = 0;
  CHECK_ERROR(i);

  return 0;
}