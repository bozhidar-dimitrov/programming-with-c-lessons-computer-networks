#include <stdio.h>

union Simple {
  int x;
  int y;
};

union ComplexUnion {
  char x;
  long y;
  double z;
};

union ipAddress {
  char ipAddress[4];
  int asNumber;
};

int main(void) {

  union Simple simpleUnion;
  simpleUnion.x = 15;
  simpleUnion.y = 20;

  printf("X=%d\n", simpleUnion.x);
  printf("Y=%d\n", simpleUnion.y);

  union ComplexUnion complex;
  complex.x = 5;
  complex.y = 5;
  complex.z = 5.5;

  printf("Y=%ld\n", complex.y);

  complex.x = 15;
  printf("X=%d\n", complex.x);

  complex.y = 155;
  printf("Y=%ld\n", complex.y);

  complex.z = 155.89;
  printf("Z=%lf\n", complex.z);

  printf("X=%d\n", complex.x);

  union ipAddress ipAddress1;
  ipAddress1.ipAddress[0] = 192;
  ipAddress1.ipAddress[1] = 168;
  ipAddress1.ipAddress[2] = 0;
  ipAddress1.ipAddress[3] = 1;

  union ipAddress ipAddress2;
  ipAddress2.ipAddress[0] = 192;
  ipAddress2.ipAddress[1] = 168;
  ipAddress2.ipAddress[2] = 0;
  ipAddress2.ipAddress[3] = 1;

  if (
    ipAddress1.ipAddress[0] == ipAddress2.ipAddress[0] 
    && ipAddress1.ipAddress[1] == ipAddress2.ipAddress[1]
    && ipAddress1.ipAddress[2] == ipAddress2.ipAddress[2] 
    && ipAddress1.ipAddress[3] == ipAddress2.ipAddress[3]  
  ) {
    printf("The ip addresses are equal\n");
  }

  if (
    ipAddress1.asNumber == ipAddress2.asNumber  
  ) {
    printf("The ip addresses are equal\n");
  }


  return 0;
}