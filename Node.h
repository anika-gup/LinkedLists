#ifndef NODE_H
#define NODE_H
#include "Student.h"
#include <iostream>
using namespace std;
class Node {
 public:
  Node(Student*);
  ~Node(); //destructor
  void setNext(Node* newnext);
  Node* getNext(); // returns next node pointer
  Student* getStudent(); //returns student pointer
 protected:
  Student* value; // stores the student assigned to node
  Node* next;
};
#endif
