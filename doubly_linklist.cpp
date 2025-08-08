#include <iostream>
#include "doubly_linklist.h"
using namespace std;

Doubly_link_list::Doubly_link_list()
{
  head = nullptr;
}

Doubly_link_list::~Doubly_link_list()
{
  node2 *temp;
  while (head != nullptr)
  {
    temp = head;
    head = head->next;
    delete temp;
  }
}

void Doubly_link_list::add_node_sorted()
{
  int value;
  cout << "Enter a value-->";
  cin >> value;

  node2 *q = new node2(value);

  if (head == nullptr)
  {
    head = q;
    return;
  }

  if (head->data >= value)
  {
    head->prev = q;
    q->next = head;
    head = q;
    return;
  }

  node2 *temp = head;
  while (temp->data < value && temp->next != nullptr)
  {
    temp = temp->next;
  }
  if (q->data < temp->data)
  {

    q->prev = temp->prev;
    temp->prev->next = q;
    q->next = temp;
    temp->prev = q;
  }
  else
  {
    q->prev = temp;
    temp->next = q;
  }
}

void Doubly_link_list::test()
{
  for (int i = 10; i > 0; i--)
  {
    node2 *temp = new node2(i);
    if (head == nullptr)
    {
      head = temp;
    }
    else
    {
      head->prev = temp;
      temp->next = head;
      head = temp;
    }
  }
}

void Doubly_link_list::add_front()
{
  int input_value;
  cout << "Enter a value --> ";
  cin >> input_value;
  node2 *temp = new node2(input_value);
  if (head == nullptr)
  {
    temp->next = head;
    head = temp;
  }
  else
  {
    head->prev = temp;
    temp->next = head;
    head = temp;
  }
}

void Doubly_link_list::add_end()
{
  int input_value;
  cout << "Enter a value --> ";
  cin >> input_value;
  node2 *temp = new node2(input_value);

  if (head == nullptr)
  {
    head = temp;
    return;
  }

  node2 *p = head;
  while (p->next != nullptr)
  {
    p = p->next;
  }
  temp->prev = p;
  p->next = temp;
}

void Doubly_link_list::add_at_position()
{
  int position, input_value;
  cout << "Enter the position to add the node --> ";
  cin >> position;

  if (position <= 0)
  {
    cout << "Invalid position. Position must be greater than 0." << endl;
    return;
  }

  cout << "Enter a value --> ";
  cin >> input_value;

  node2 *temp = new node2(input_value);

  if (position == 1)
  {
    if (head == nullptr)
    {
      temp->next = head;
      head = temp;
    }
    else
    {
      head->prev = temp;
      temp->next = head;
      head = temp;
    }
    return;
  }

  node2 *p = head;
  int current_position = 1;

  while (p != nullptr && current_position < position - 1)
  {
    p = p->next;
    current_position++;
  }

  if (p == nullptr)
  {
    cout << "Position is out of bounds." << endl;
    delete temp;
    return;
  }
  if (p->next == nullptr)
  {
    temp->prev = p;
    temp->next = p->next;
    p->next = temp;
  }
  else
  {
    temp->prev = p;
    p->next->prev = temp;
    temp->next = p->next;
    p->next = temp;
  }
}

void Doubly_link_list::display()
{
  if (head == nullptr)
  {
    cout << "The list is empty." << endl;
    return;
  }

  node2 *temp = head;
  cout << "The linked list is: ";
  while (temp != nullptr)
  {
    cout << temp->data << " |" << " ";
    temp = temp->next;
  }
  cout << endl;
}

void Doubly_link_list::displayRev()
{
  if (head == nullptr)
  {
    cout << "The list is empty." << endl;
    return;
  }

  node2 *temp = head;
  cout << "The linked list is: ";
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  while (temp != nullptr)
  {
    cout << temp->data << " |" << " ";
    temp = temp->prev;
  }

  cout << endl;
}

void Doubly_link_list::search()
{
  int data;
  cout << "Enter the value to search --> ";
  cin >> data;

  node2 *temp = head;
  while (temp != nullptr)
  {
    if (temp->data == data)
    {
      cout << "Value found." << endl;
      return;
    }
    temp = temp->next;
  }
  cout << "Value not found." << endl;
}

void Doubly_link_list::count()
{
  int data, c = 0;
  cout << "Enter the value to count --> ";
  cin >> data;

  node2 *temp = head;
  while (temp != nullptr)
  {
    if (temp->data == data)
    {
      c++;
    }
    temp = temp->next;
  }
  cout << "The value has been repeated-->" << c << endl;
}

void Doubly_link_list::delete_Node()
{
  int value;
  cout << "Enter the value you want to delet ";
  cin >> value;
  if (head == nullptr)
  {
    cout << "The list is empty!" << endl;
    return;
  }
  node2 *os = head;

  if (head->data == value)
  {
    node2 *temp = head;
    if (head->next != nullptr)
    {
      head->next->prev = nullptr;
      head = head->next;
      delete temp;
    }
    else
    {
      head = head->next;
      delete temp;
    }

    return;
  }

  while (os != nullptr && os->data != value)
  {
    os = os->next;
  }
  if (os == nullptr)
  {
    cout << "Node with value " << value << " not found!" << endl;
    return;
  }
  if (os->next == nullptr)
  {
    os->prev->next = nullptr;
    delete os;
  }
  else
  {
    os->next->prev = os->prev;
    os->prev->next = os->next;
    delete os;
  }
  cout << "Node with value " << value << " deleted." << endl;
}

void Doubly_link_list::delete_all_thelist()
{
  node2 *temp;
  while (head != nullptr)
  {
    temp = head;
    head = head->next;
    delete temp;
  }
  head = nullptr;
}