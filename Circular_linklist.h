#ifndef Circular_linklist
#define Circular_linklist
#include "node1.h"

class CircularLinkedList
{
  Node3 *head;

public:
  CircularLinkedList();

  void test();

  void addToFront();

  void addToEnd();

  void addAfterValue();

  void deleteFromFront();

  void deleteFromEnd();

  void deleteValue();

  void display();

  void delete_AllList();

  ~CircularLinkedList();
};
#endif