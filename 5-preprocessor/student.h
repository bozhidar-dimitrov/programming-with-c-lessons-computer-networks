#ifndef _STUDENT_H
#define _STUDENT_H

#include "person.h"

struct Student {
  struct Person info;
  double averageGrade;
};

#endif