#include <iostream>
#include "Node.h"
using namespace std;

// main

void add(int newvalue);
void print(Node* next);

Node* head = NULL;

int main() {
  add(5);
  print(head);
  add(7);
  print(head);
  add(2);
  print(head);
}

void add(int newvalue) {
  Node* current = head;
  if (current==NULL) {
    head = new Node();
    head->setValue(newvalue);
  }
  else {
    while (current->getNext() !=NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newvalue);
  }



}

void print(Node* next) {
  if (next==head) {
    cout << "list: " ;
  }
  if (next != NULL) {
    cout << next->getValue() << "  " ;
    print(next->getNext());
  }
}
