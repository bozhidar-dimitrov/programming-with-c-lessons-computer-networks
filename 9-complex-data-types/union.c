#include <stdio.h>

union simple {
  int x;
  int y;
};

union complex {
  int x;
  float y;
  double z;
};

union ipAddress {
  unsigned char octets[4];
  int asNumber;
};

int main(void) {

  union simple sim1;
  sim1.x = 15;
  sim1.y = 20;

  printf("%d\n", sim1.x);
  printf("%d\n", sim1.y);
  
  union complex com1;

  com1.x = 12345;
  com1.z = 5.35;

  printf("X: %d\n", com1.x);

  //192.168.0.1


  return 0;
}