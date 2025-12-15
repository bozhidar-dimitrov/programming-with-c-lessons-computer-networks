#include <stdio.h>

//Predefined macros:
//__FILE__ - the name of the file being preprocessed
//__LINE__ - the line number where the macros is used
//__DATE__ - the date of the preprocessing
//__TIME__ - the time of the preprocessing

int main(void) {

  printf("FILE: %s\n", __FILE__);
  printf("LINE: %d\n", __LINE__);
  printf("DATE: %s\n", __DATE__);
  printf("TIME: %s\n", __TIME__);
  
  return 0;
}