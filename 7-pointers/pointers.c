#include <stdio.h>

int main(void) {

  int a = 5;
  printf("Address of variable a: %p\n", &a);

  int * p = &a;
  printf("Address stored in p: %p\n", p);

  size_t sizeOfPointer = sizeof(p);
  printf("Size of pointer: %zu\n", sizeOfPointer);

  //Dereferencing operator: *p
  //Дереференциращ оператор: *p
  printf("The value of the variable which address the pointer holds: %d\n", *p);

  *p = 15;
  printf("Value of a: %d\n", a);

  return 0;
}