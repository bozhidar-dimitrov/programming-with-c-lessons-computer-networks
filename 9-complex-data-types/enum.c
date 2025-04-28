#include <stdio.h>

enum weekday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

//Gives compiler error, enum constants must be unique:
/* enum workday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY
}; */

enum robotstate {
  TURNED_OFF = 0,
  WORKING = 1 ,
  CHARGING = 1
};

typedef enum bool {
  false = 0,
  true = 1,
} Bool;

int main(void) {

  int date = 0;
  do {
    printf("Enter a day of the week (1-7):");
    scanf("%d", &date);
  } while (date < 1 || date > 7);

  enum weekday dayOfTheWeek = date;

  switch(dayOfTheWeek) {
    case MONDAY: 
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is working \n");
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging \n");
      break;
    default:
      printf("Invalid day of the week");
  }

  enum robotstate state = WORKING;
  if (state) {
    printf("The robot is turned on \n");
  } else {
    printf("The robot is turned off \n");
  }

  Bool isWorking = true;
  if (isWorking) {
    printf("The robot is turned on\n");
  } else {
    printf("The robot is turned off\n");
  }

  return 0;
}