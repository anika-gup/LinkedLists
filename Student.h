#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
 public:
  Student();
  void setID(int iid);
  int getID(); //for testing, can be deleted
 protected:
  int id;
  
} ;
#endif
