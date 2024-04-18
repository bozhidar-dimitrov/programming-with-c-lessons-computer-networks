#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass {
  Student students[27];
  int grade;
  char classLetter;
} StudentClass;

typedef struct teacher {
  char name[30];
  char teachingSubject[30];
} Teacher;

typedef struct lesson {
  StudentClass studentClass;
  Teacher teacher;
  float startingTime;
  unsigned int durationInMinutes;
} Lesson;

typedef enum weekday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
} Weekday;

typedef struct dayschedule {
  Weekday day;
  Lesson lessons[8];
} DaySchedule;

typedef enum bool {
  false,
  true
} Boolean;

typedef struct weekschedule {
  DaySchedule schedules[5];
  Boolean isEven;
} WeekSchedule;

int main(void) {

  //Makes the code more readable
  Boolean isSunnyOutside = true;

  return 0;
}