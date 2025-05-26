#include <stdio.h>


typedef struct {
  char fullname[60];
  char teachingSubject[60];
} Teacher;

typedef struct {
  int numberOfStudents;
  struct {
    char fullname[60];
    int number;
    float averageGrade;
  } students[30];
  char classLetter;
  int classNumber;
  Teacher homeroomTeacher;
} StudentClass;

typedef struct {
  char name[60];
  int startHour;
  int startMinutes;
  Teacher teacher;
} Lesson;


typedef struct {
  enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
  } day;
  Lesson lessons[10];
} DaySchedule;

typedef struct {
  DaySchedule daySchedules[7];
} WeekSchedule;

typedef struct {
  WeekSchedule oddWeek;
  WeekSchedule evenWeek;
  StudentClass studentClass;
} Schedule;

int main(void) {

  

  return 0;
}