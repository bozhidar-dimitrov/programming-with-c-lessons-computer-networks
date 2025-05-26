#include <stdio.h>

typedef struct student {
  char fullname[60];
  int number;
  float averageGrade;
} Student;

typedef struct teacher {
  char fullname[60];
  char teachingSubject[60];
} Teacher;

typedef struct studentClass {
  int numberOfStudents;
  Student students[30];
  char classLetter;
  int classNumber;
  Teacher homeroomTeacher;
} StudentClass;

typedef struct lesson {
  char name[60];
  int startHour;
  int startMinutes;
  Teacher teacher;
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

typedef struct daySchedule {
  Weekday day;
  Lesson lessons[10];
} DaySchedule;

typedef struct weekSchedule {
  DaySchedule daySchedules[7];
} WeekSchedule;

typedef struct schedule {
  WeekSchedule oddWeek;
  WeekSchedule evenWeek;
  StudentClass studentClass;
};

int main(void) {

  

  return 0;
}