#include "Node.h"
#include <iostream>
#include <cstring>
using namespace std;
Node::Node(Student* myStudent) {
  //creating node, takes in a student pointer
  value = myStudent; // setting value to the student
  next=NULL;
  cout << "creating node" << endl;
}
Node::~Node() {
  delete value; // deletes the student assigned to this node
}

void Node::setNext(Node* newnext) { //sets the next node
  next=newnext;
}
Node* Node::getNext() { //returns the next node pointer
  return next;
}
Student* Node::getStudent() {
  return value; //returns the student
}
