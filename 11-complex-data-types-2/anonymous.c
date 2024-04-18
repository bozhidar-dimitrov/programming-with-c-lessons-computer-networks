#include <stdio.h>

//Using anonymous structures in typedef aliases is the most common use of them
typedef struct {
  char name[30];
  int number;
} Student;

typedef struct {
  Student students[27];
  int grade;
  char classLetter;
} StudentClass;


typedef struct {
  StudentClass studentClass;
  //Moving teacher to an anonymous structure
  struct {
    char name[30];
    char teachingSubject[30];
  } teacher;
  float startingTime;
  unsigned int durationInMinutes;
} Lesson;

//This definitions is useless, because you cannot create variables of this anonymous structure
struct {
  int numberQuestions;
  int numberOfAnswers;
};

typedef struct {
  //Moving Weekday to an anonymous structure
  enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
  } day;
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

  //Anonymous structure
  struct {
    char schoolName[30];
    char schoolAddress[30];
  } school;

  //Cannot reuse the anonymous structure definition - you need to copy the code
  struct {
    char schoolName[30];
    char schoolAddress[30];
  } school2;

  //We can use the name of non-anonymous structure
  struct weekschedule week1;

  return 0;
}