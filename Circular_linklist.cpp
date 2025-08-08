#include <iostream>
#include "Circular_linklist.h"
using namespace std;

CircularLinkedList::CircularLinkedList()
{
  head = nullptr;
}

void CircularLinkedList::test()
{
  for (int i = 10; i > 0; i--)
  {
    if (head == nullptr)
    {
      head = new Node3(i);
      head->next = head;
    }
    else
    {
      Node3 *newNode = new Node3(i);
      newNode->next = head;

      Node3 *last = head;
      while (last->next != head)
      {
        last = last->next;
      }

      last->next = newNode;
      head = newNode;
    }
  }
}

void CircularLinkedList::addToFront()
{
  for (int i = 10; i > 0; i--)
  {
    if (head == nullptr)
    {
      head = new Node3(i);
      head->next = head;
    }
    else
    {
      Node3 *newNode = new Node3(i);
      newNode->next = head;

      Node3 *last = head;
      while (last->next != head)
      {
        last = last->next;
      }

      last->next = newNode;
      head = newNode;
    }
  }
}

void CircularLinkedList::addToEnd()
{
  int value;
  cout << "Enter a value-->";
  cin >> value;

  Node3 *newNode = new Node3(value);

  if (head == nullptr)
  {
    head = newNode;
  }
  else
  {
    Node3 *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    newNode->next = head;
    head = newNode;
    temp->next = head;
  }
}

void CircularLinkedList::addAfterValue()
{

  int value, afterValue;
  cout << "Enter a value-->";
  cin >> value;

  cout << "Add afterValue-->";
  cin >> afterValue;

  if (head == nullptr)
  {
    cout << "The list is empty" << endl;
    return;
  }

  Node3 *newNode = new Node3(value);
  Node3 *current = head;

  do
  {
    if (current->data == afterValue)
    {
      newNode->next = current->next;
      current->next = newNode;
      return;
    }
    current = current->next;
  } while (current != head);

  cout << "Node with value " << afterValue << " not found!" << endl;
  delete newNode;
}

void CircularLinkedList::deleteFromFront()
{
  if (head == nullptr)
  {
    cout << "The list is empty" << endl;
    return;
  }

  if (head->next == head)
  {

    delete head;
    head = nullptr;
    return;
  }

  Node3 *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }

  Node3 *oldHead = head;
  head = head->next;
  temp->next = head;
  delete oldHead;
}

void CircularLinkedList::deleteFromEnd()
{
  if (head == nullptr)
  {
    cout << "The list is empty" << endl;
    return;
  }

  if (head->next == head)
  {

    delete head;
    head = nullptr;
    return;
  }

  Node3 *current = head;
  Node3 *previous = nullptr;

  while (current->next != head)
  {
    previous = current;
    current = current->next;
  }

  previous->next = head;
  delete current;
}

void CircularLinkedList::deleteValue()
{
  int value;
  cout << "Enter the value you want to delet-->";
  cin >> value;

  if (head == nullptr)
  {
    cout << "The list is empty!" << endl;
    return;
  }

  if (head->data == value)
  {
    deleteFromFront();
    return;
  }

  Node3 *current = head;
  Node3 *previous = nullptr;

  do
  {
    if (current->data == value)
    {
      previous->next = current->next;
      delete current;
      return;
    }
    previous = current;
    current = current->next;
  } while (current != head);

  cout << "Node with value " << value << " not found!" << endl;
}

void CircularLinkedList::display()
{

  if (head == nullptr)
  {
    cout << "The list is empty" << endl;
    return;
  }

  Node3 *current = head;
  do
  {
    cout << current->data << " -> ";
    current = current->next;
  } while (current != head);

  cout << "(----)" << endl;
}

void CircularLinkedList::delete_AllList()
{
  if (head == nullptr)
    return;

  Node3 *current = head->next;
  while (current != head)
  {
    Node3 *temp = current;
    current = current->next;
    delete temp;
  }
  delete head;
  head = nullptr;
}

CircularLinkedList::~CircularLinkedList()
{
  if (head == nullptr)
    return;

  Node3 *current = head->next;
  while (current != head)
  {
    Node3 *temp = current;
    current = current->next;
    delete temp;
  }
  delete head;
  head = nullptr;
}
