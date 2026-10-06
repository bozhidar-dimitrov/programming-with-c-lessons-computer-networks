#include <stdio.h>

int main(void) {

    //Assignement operators
    int a = 5;

    //Arithmetic operators
    int a1 = 5;
    int b1 = 2;
    int c1 = a1 + b1;
    int d1 = a1 - b1;
    int e1 = a1 * b1;
    int f1 = a1 / b1; //f1 == 2
    float f11 = 5.0f / 2.0f; //f11 == 2.5  
    int h1 = a1 % b1; //h1 == 1

    //Logical operators - AND, OR, NOT
    int a2 = 1;
    int b2 = 0;
    int c2 = a2 && b2; //c2 == 0
    int d2 = a2 || b2; //d2 == 1
    int e2 = !b2; //e2 == 1

    //Comparison operators
    int a3 = 5;
    int b3 = 6;
    int c3 = a3 < b3; //c3 == 1
    int d3 = a3 > b3; //d3 == 0
    int e3 = a3 >= b3;
    int f3 = a3 <= b3;
    int g3 = a3 != b3;
    int h3 = a3 == b3;


    return 0;
}