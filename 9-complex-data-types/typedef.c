#include <stdio.h>

typedef unsigned const long long ucll;

ucll add (ucll a, ucll b) {
  ucll result = a + b;
  return result;
}

int main(void) {

  ucll a = 15;
  ucll b = 20;
  ucll result = add(a, b);
  printf("%llu\n", result);

  return 0;
}