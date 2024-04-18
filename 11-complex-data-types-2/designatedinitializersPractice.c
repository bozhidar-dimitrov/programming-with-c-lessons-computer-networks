#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass {
  Student students[4];
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

  Student ivan = {
    .name = "Ivan",
    .number = 11
  };

  Student ioanna = {
    .name = "Ioanna",
    .number = 15
  };

  Student georgi = {
    .name = "Georgi",
    .number = 16
  };

  StudentClass g9 = {
    .classLetter = 'g',
    .grade = 9,
    .students = {
      ivan, 
      georgi, 
      ioanna, 
      {
        .name = "Petar", 
        .number = 23
      }
    }
  };

  printf("Name: %s", g9.students[3].name);

  return 0;
}