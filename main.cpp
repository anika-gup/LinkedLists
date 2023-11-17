#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;

// main
// by anika gupta
//linked lists 11/17/2023
int main() {
  Student* student = new Student(); // creating a student
  student->setID(111); // setting ID of student (for testing purposes)
  Node* myNode = new Node(student); //creating first Node
  cout << myNode->getStudent()->getID() << endl; // printing ID of student in 1st Node
  Student* nextStudent = new Student(); //creating 2nd student
  nextStudent->setID(222); //adding ID for 2nd student 
  Node* nextNode = new Node(nextStudent); //creating next node
  myNode->setNext(nextNode); //setting 2nd node as nextnode for 1st node
  cout << myNode->getNext()->getStudent()->getID() << endl; // testing the getNext and setNext for Node by printing out ID of original Node's getNext student
  nextNode->~Node(); // deleting nextNode
  return 0;
}
