#include <stdio.h>

typedef unsigned const long long ucll;

ucll sum(ucll a, ucll b) {
  ucll result = a + b;
  return result;
}

int main(void) {

  ucll distanceSoFar = 3434;
  ucll newDistance = 3434353;

  ucll totalDistance = sum(distanceSoFar, newDistance);
  printf("Total distance: %llu\n",  totalDistance);

  //Alias that we already have learned
  size_t sizeOfInt = sizeof(int);

  return 0;
}