#include <stdio.h>

enum WeekDay {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

//We cannot reuse the name of the constants in other enums
//This gives compiler error:
// enum WorkDay {
//   MONDAY = 1,
//   TUESDAY,
//   WEDNESDAY,
//   THURSDAY,
//   FRIDAY
// };

//We can give different values,
//and the counting will contunue from the last given number:
enum Test {
  A = 2,
  B,
  C,
  D = 9,
  E,
  F,
  G = 15,
  H
};

enum RobotState {
  TURNED_OFF = 0,
  WORKING = 1,
  CHARGING_THE_BATTERY = 1
};

typedef enum Boolean {
  true = 1,
  false = 0
} Bool;

int main(void) {

  int dayOfTheWeek = 0;
  do {
      printf("Days of the week:\n");
      printf("1 - Monday\n");
      printf("2 - Tuesday\n");
      printf("3 - Wednesday\n");
      printf("4 - Thursday\n");
      printf("5 - Friday\n");
      printf("6 - Saturday\n");
      printf("7 - Sunday\n");
      printf("Type in day of the week(1-7):");
      scanf("%d", &dayOfTheWeek);
  } while (dayOfTheWeek <= 0 || dayOfTheWeek > 7);

  enum WeekDay currentDay = dayOfTheWeek;
  enum RobotState state = TURNED_OFF;

  switch(currentDay) {
    case MONDAY:
      printf("The robot is turned off\n");
      state = TURNED_OFF;
      break;
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is working \n");
      state = WORKING;
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the battery \n");
      state = CHARGING_THE_BATTERY;
      break;
    default:
      printf("Invalid option!\n");
      break;
  }

  if (state) {
    printf("The robot is turned on!\n");
  } else {
    printf("The robot is turned off\n");
  }

  Bool robotIsWorking = true;
  if (robotIsWorking) {
    printf("We can receive data from the robot \n");
  } else {
    printf("We cannot communicate with the robot \n");
  }

  return 0;
}