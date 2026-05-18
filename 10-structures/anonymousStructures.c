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

typedef struct {
  char firstname[MAX_NAME_LENGTH + 1];
  char surname[MAX_NAME_LENGTH + 1];
  char teachingSubject[MAX_TEACHING_SUBJECT_NAME_LENGTH + 1];
} Teacher;

typedef struct  {
  struct { //Anonymous structure
    int number;
    char name[MAX_NAME_LENGTH + 1];
    float averageGrade;
  } students[MAX_STUDENTS_PER_CLASS];

  char classLetter;
  int classNumber;
  Teacher homeroomTeacher;
} StudentClass;

typedef enum {
  BULGARIAN_LANGUAGE,
  MATHEMATICS,
  PROGRAMMING,
  ENGLISH,
  PHYSICS,
  CHEMISTRY
} Subject;

typedef struct {
  Teacher lessonTeacher;
  char lessonTheme[MAX_LESSON_THEME_LENGTH + 1];
  Subject lessonSubject;
  int durationInMinutes;
} Lesson;

typedef enum {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
} Weekday;

typedef struct {
  int subjectsCount;
  Lesson lessons[MAX_LESSONS_PER_DAY];
  Weekday day;
} DaySchedule;

typedef struct {
  DaySchedule day[SCHOOL_DAYS_PER_WEEK];
} WeekSchedule;

struct classSchedule {
  WeekSchedule oddWeekSchedule;
  WeekSchedule evenWeekSchedule;
  StudentClass class;
};

typedef struct {
  struct classSchedule schedules[CLASSES_PER_SCHOOL_YEAR];
} SchoolSchedule;

typedef struct {
  char name[MAX_NAME_LENGTH + 1];
  char address[MAX_ADDRESS_LENGTH + 1];
  Teacher director;
  SchoolSchedule schoolTeachingSchedule; 
} School;

int main(void) {

  //struct teacher programmingTeacher;
  Teacher bulgarianLanguageTeacher;

  return 0;
}