#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;
void ADD(Node* node, Node* &head);
void PRINT(Node* head);
// main
// by anika gupta
int main() {
  /*
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
  */
  Node* head = NULL;
  int quit = 0;
  cout << "What would you like to do?" << endl;
  while (quit==0) {
    char input[15];
    cout << "  Options: ADD   PRINT   DELETE  QUIT " << endl;
    cin >> input;
    if (strcmp(input, "QUIT")==0) {
      quit = 1;
    }
    else if (strcmp(input, "ADD")==0) {
      cout << "adding" << endl;
      Student* student = new Student();

      //id
      cout << "ID: " ;
      int id;
      cin >> id;
      student->setID(id);

      //first name
      cout << "First Name: " ;
      char fName[15];
      cin >> fName;
      student->setFName(fName);

      //last name
      cout << "Last Name: " ;
      char lName[15];
      cin >> lName;
      student->setLName(lName);

      //gpa
      cout << "GPA: " ;
      int GPA;
      cin >> GPA;
      student->setGPA(GPA);
      
      Node* node = new Node(student);
      
      ADD(node, head);
    }
    else if (strcmp(input, "PRINT") ==0) {
      cout << "printing" << endl;
      PRINT(head);
    }
    else if (strcmp(input, "DELETE") ==0) {
      cout << "deleting" << endl;
    }

  }
  
  return 0;
}
void ADD(Node* node, Node* &head) {
  cout << "in the adding place" << endl;
  if (head==NULL) {
    head = node;
    cout << "head is the node now" << endl;

    head->setNext(NULL);
    return;
  }
  Node* current = head;
  if (current->getNext()==NULL) { // if only 1 value is there
    cout << "there's only one value so adding a new one..." << endl;
    if (current->getStudent()->getID() > node->getStudent()->getID()) {
      head=node;
      head->setNext(current);
      current->setNext(NULL);
    }
    else {
      head->setNext(node);
      node->setNext(NULL);
    }
    return;
  }

  else if (head->getStudent()->getID() > node->getStudent()->getID() ) {
    // if head is greater than current node
    head=node;
    head->setNext(current);
    
  }
  //??figure out add function!!
 
  else {
    while (current->getNext()!=NULL && current->getNext()->getStudent()->getID() < node->getStudent()->getID()) {
        // if the current node, which starts at 0, has a smaller id than the next one, then current jumps to the next node
        cout << "while loop" << endl;
        current = current->getNext();
     }
     node->setNext(current->getNext());
     //also previous value needs to have get next to this value
  // figure out how to have the larget value lead to null
  }
}

void PRINT(Node* head) {
  cout << "in printing function" << endl;
  Node* current = head;
  int count = 0;
  while (current->getNext()!=NULL) {
    count ++;
    cout << current->getStudent()->getFName() << "   ID: ";
    cout << current->getStudent()->getID() << endl;
    current = current->getNext();
    //cout << current->getStudent()->getFName() << endl;
   }
  cout << "count: " << count << endl;
  cout << current->getStudent()->getFName() << "   ID: " << current->getStudent()->getID() << endl;
  cout << "finished printing" << endl;
  if (current->getNext() == NULL) {
    cout << current->getStudent()->getFName() << " next is null" << endl;
  }
}
