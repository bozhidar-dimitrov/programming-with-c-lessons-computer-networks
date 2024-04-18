#include <stdio.h>

//By default the enum values contain auto-increment integers
//You can assign specific integer constants to enum values
enum Weekday {
  MONDAY = 1,
  TUESDAY = 2,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

void printWeekdayLegend() {
  printf("1 - Monday\n");
  printf("2 - Tuesday\n");
  printf("3 - Wednesday\n");
  printf("4 - Thursday\n");
  printf("5 - Friday\n");
  printf("6 - Saturday\n");
  printf("7 - Sunday\n");
}

//Two or more enum values can have the same constant integer value
enum RobotState {
  TURNED_OFF = 0,
  WORKING = 1,
  CHARGING = 1
};

int main(void) {

  int dayInput = 0;
  printWeekdayLegend();
  printf("Please enter the day of the week:");
  scanf("%d", &dayInput);

  enum Weekday currentDay = dayInput;

  //The enum values contain integer constants
  //printf("SUNDAY:%d", SUNDAY);
  
  switch (dayInput) {
    case MONDAY:
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is collecting garbage\n");
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the battery\n");
      break;
    default:
      printf("Invalid day of the week\n");
  }

  /*
    Be careful when using the same integer constant
    Because working and charging have the same value
    the program will execute both of the following 
    if clauses:
  */
  enum RobotState state = WORKING;
  if (state == WORKING) {
    printf("Test\n");
  }

  if (state == CHARGING) {
    printf("Test2\n");
  }

  return 0;
}