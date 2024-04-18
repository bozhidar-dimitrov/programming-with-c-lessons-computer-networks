#include <stdio.h>
#include <string.h>

typedef struct {
  char name[30];
  int number;
} Student;

typedef struct {
  char specialLetter;
  int specialNumbers[5];
} Container;

int main(void) {

  Student viktor;
  viktor.number = 10;
  //This is not allowed because name is an array;
  //viktor.name = "Viktor";

  //We need to use the strcpy function defined in string.h
  strcpy(viktor.name, "Viktor");

  printf("Name: %s\n", viktor.name);
  printf("Number: %d\n", viktor.number);

  //Allowed only when we define the array
  int arr[4] = {1, 2, 3, 4};
  //THis is not allowed:
  //arr = {4, 5, 6, 8};

  //Will fill the remaining elements with zeros
  int arr2[4] = {1, 2};
  for (int i = 0; i < 4; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  //This will initialize all the elements to 0
  int arr3[100] = {0};

  //Initializing structures - the order matters
  Student ivan = {"Ivan", 15};

  //Wrong - the values are reordered
  //Student nikol = {23, "Nikol"};

  Student mladen = {"Mladen"};
  printf("Name: %s\n", mladen.name);
  printf("Number: %d\n", mladen.number);

  //Using array initializator inside structure initializator
  Container container = {'A', {2, 3, 5, 6, 7}};

  return 0;
}