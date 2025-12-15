#ifndef _PERSON_H_
#define _PERSON_H_

struct Person {
  char firstname[50];
  char lastname[50];
  int age;
};

#endif

//This is forbidden in header files (only declarations are allowed)
// int square(int a) {
//   return a * a;
// }

//This is allowed (declaration):
int square(int a);