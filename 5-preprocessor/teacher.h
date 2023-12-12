#ifndef _TEACHER_H
#define _TEACHER_H

#include "person.h"

struct Teacher {
  struct Person info;
  char teacherSubject[40];
};

#endif