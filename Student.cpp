#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student() {
  cout << "creating student" << endl;
}

//ID stuff for student is purely for testing purposes. Can be deleted.
int Student::getID() {
  cout << "returning ID" << endl;
  return id;
}

void Student::setID(int iid) {
  id = iid;
}
