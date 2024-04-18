#include <stdio.h>

typedef unsigned long long ull;

//You can use both the original type and the alias
typedef int newint;

//You can use one typedef in another typedef
typedef ull something;

typedef struct student {
  char name[30];
  int number;
} StudentType;

//We can declare typedef after struct declaration
typedef struct student AnotherStudentType;

ull addTwoDistances(
  ull a, 
  ull b
) {
  return a + b;
}

int main(void) {
  //You can use the typedef in local scope
  typedef int test;

  int a = 15;
  newint b = 10;
  test x = 30;

  ull x1 = 10;
  something x2 = 15;

  ull result = addTwoDistances(x1, x2);
  printf("%llu", result);

  struct student georgi;

  //If we use typedef for structs, we can avoid writing struct infront of variable declaration
  StudentType dimitar;

  AnotherStudentType lora;

  return 0;
}