#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS_PER_CLASS 27
#define MAX_TEACHING_SUBJECT_NAME_LENGTH 150
#define MAX_SUBJECT_NAME_LENGTH 200
#define MAX_LESSON_THEME_LENGTH 300
#define MAX_LESSONS_PER_DAY 10
#define SCHOOL_DAYS_PER_WEEK 5
#define CLASSES_PER_SCHOOL_YEAR 20
#define MAX_ADDRESS_LENGTH 200

struct student {
  int number;
  char name[MAX_NAME_LENGTH + 1];
  float averageGrade;
};

struct teacher {
  char firstname[MAX_NAME_LENGTH + 1];
  char surname[MAX_NAME_LENGTH + 1];
  char teachingSubject[MAX_TEACHING_SUBJECT_NAME_LENGTH + 1];
};

struct studentClass {
  struct student students[MAX_STUDENTS_PER_CLASS];
  char classLetter;
  int classNumber;
  struct teacher homeroomTeacher;
};

enum subject {
  BULGARIAN_LANGUAGE,
  MATHEMATICS,
  PROGRAMMING,
  ENGLISH,
  PHYSICS,
  CHEMISTRY
};

struct lesson {
  struct teacher lessonTeacher;
  char lessonTheme[MAX_LESSON_THEME_LENGTH + 1];
  enum subject lessonSubject;
  int durationInMinutes;
};

enum weekday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

struct daySchedule {
  int subjectsCount;
  struct lesson lessons[MAX_LESSONS_PER_DAY];
  enum weekday day;
};

struct weekSchedule {
  struct daySchedule day[SCHOOL_DAYS_PER_WEEK];
};

struct classSchedule {
  struct weekSchedule oddWeekSchedule;
  struct weekSchedule evenWeekSchedule;
  struct studentClass class;
};

struct schoolSchedule {
  struct classSchedule schedules[CLASSES_PER_SCHOOL_YEAR];
};

struct school {
  char name[MAX_NAME_LENGTH + 1];
  char address[MAX_ADDRESS_LENGTH + 1];
  struct teacher director;
  struct schoolSchedule schoolTeachingSchedule; 
};

int main(void) {

  return 0;
}