#include <stdio.h>

int main(void) {

  //1 byte = 8 bit, 4 bytes = 32 bits => max =0 - 2^32 - 1:
  //but we have positive and negative numbers =>
  //the range is divided by 2 =>
  //-(2 ^ 32) / 2 - 0 and 0 - +(2^32 / 2) - 1
  int someVariableX = 5;

  //3 bit = > 2^3 == 8 => 0, 1, 2, 3, 4, 5, 6, 7
  //-4 -3 -2 -1 0 1 2 3 

  //1 bit = 0 and 1 [0] 2 ^ 1 = 2
  //
  /***
   * 2 bit: 2 ^ 2 = = 4
   *        [0][0] = 0
   *        [0][1] = 1
   *        [1][0] = 2
   *        [1][1] = 3
   */

   /***
    *       [0][0][0] = 0
    *       [0][0][1] = 1
    *       [0][1][0] = 2
    *       [0][1][1] = 3
    * -----------------------
    *       [1][0][0] = -4
    *       [1][0][1] = -3
    *       [1][1][0] = -2
    *       [1][1][1] = -1
    * 
    */

    /**
     * [][][][][][][][][][][][][][][][][][][][][][][][][][][][][] - (0 , 2^32 - 1)
     * (-2^32 / 2, 0, 2 ^ 32 / 2 - 1)
     * 
     */
  
  unsigned int otherVariable = 51;

  //Is the biggest positive integer value can be stored in:
  unsigned long long meters;

  return 0;
}