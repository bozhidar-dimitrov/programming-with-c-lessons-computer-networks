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

  union ipAddress address1;
  address1.octets[0] = 1;
  address1.octets[1] = 0;
  address1.octets[2] = 168;
  address1.octets[3] = 192;

  union ipAddress address2;
  address2.octets[0] = 1;
  address2.octets[1] = 0;
  address2.octets[2] = 168;
  address2.octets[3] = 192;

  if (address1.asNumber == address2.asNumber) {
    //The two ip addresses are equal
  }


  return 0;
}