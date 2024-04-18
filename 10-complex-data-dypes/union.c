#include <stdio.h>
#include <string.h>
//Unions - Обединения

//Similiar to structures you can have properties of different types
//Unlike structures all properties use the same memory location
union Test {
  int x;
  int y;
};

union ComplexExample {
  int x;
  float y;
  double z;
};

union StudentID {
  int egn;
  char fullname[30];
};

int main(void) {

  union Test test1;
  test1.x = 10;

  printf("%d \n", test1.y); //The same value as x

  union ComplexExample complex;
  complex.z = 3.53;

  printf("%d \n", complex.x); //Will print random number

  //Example of using unions
  union StudentID lora;
  lora.egn = 12312313;

  union StudentID nikolai;
  strcpy(nikolai.fullname, "Nikolai Ivanov Dimitrov");

  //We cannot use the fullname of lora - we decided that we identify lora via egn
  //printf("%s", lora.fullname);

  //Main purpose of the union is to optimize the memory usage of the programs

  return 0;
}