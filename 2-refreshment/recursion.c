#include <stdio.h>
//N = 6 => sumN = 1 + 2 + 3 + 4 + 5 + 6
  //sumN(N) = sumN(N-1) + N
  //sumN(6) = sumN(5) + 6
  //sumN(5) = sumN(4) + 5
  //sumN(4) = sumN(3) + 4
  //sumN(3) = sumN(2) + 3
  //sumN(2) = sumN(1) + 5
  //sumN(1) = 1
int sumN(int n) {
  if (n == 1) {
    return 1;
  }
  return sumN(n-1) + n;
}

/*
  11 / 2 = 5 / 2 = 2 / 2 = 1 / 2 = 0
  10       4       2       2
   1       1       0       1
   
   1 + 1 * 10 + 0 * 100 + 1 * 1000

  dtb(n) = dtb(n/2) * 10 + n % 2
  dtb(11) = ((1 * 10 + 0) * 10 + 1) * 10 + 1 = (10 * 10 + 1) * 10 + 1 = 101*10 + 1 = 1010 + 1 = 1011
  dtb(5) = (1 * 10 + 0) * 10 + 1
  dtb(2) = 1 * 10 + 0
  dtb(1) = 1
*/
long decimalToBinary(int n) {
  if (n == 1) {
    return 1;
  }
  return n % 2 + 10 * decimalToBinary(n / 2);
}

int main(void) {
  
  int result = sumN(6);
  printf("%d\n", result);

  long result2 = decimalToBinary(11);
  printf("%ld\n", result2);

  return 0;
}