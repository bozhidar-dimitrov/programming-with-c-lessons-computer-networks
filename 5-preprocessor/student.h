#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "person.h"

struct Student {
  struct Person info;
  double averageGrade;
};

#endif