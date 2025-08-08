#include <iostream>
#include "single_linklist.h"
using namespace std;

link_list::link_list()
{
  head = nullptr;
}

link_list::~link_list()
{
  node *temp;
  while (head != nullptr)
  {
    temp = head;
    head = head->next;
    delete temp;
  }
}

void link_list::add_node_sorted()
{
  int value;
  cout << "Enter a value-->";
  cin >> value;

  node *q = new node(value);

  if (head == nullptr)
  {
    head = q;
    return;
  }

  if (head->data >= value)
  {
    q->next = head;
    head = q;
    return;
  }

  node *temp = head;
  while (temp->next != nullptr && temp->next->data < value)
  {
    temp = temp->next;
  }

  q->next = temp->next;
  temp->next = q;
}

void link_list::add_front()
{
  int input_value;
  cout << "Enter a value --> ";
  cin >> input_value;
  node *temp = new node(input_value);
  temp->next = head;
  head = temp;
}

void link_list::add_end()
{
  int input_value;
  cout << "Enter a value --> ";
  cin >> input_value;
  node *temp = new node(input_value);

  if (head == nullptr)
  {
    head = temp;
    return;
  }

  node *p = head;
  while (p->next != nullptr)
  {
    p = p->next;
  }
  p->next = temp;
}

void link_list::add_at_position()
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

  node *temp = new node(input_value);

  if (position == 1)
  {
    temp->next = head;
    head = temp;
    return;
  }

  node *p = head;
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

  temp->next = p->next;
  p->next = temp;
}

void link_list::display()
{
  if (head == nullptr)
  {
    cout << "The list is empty." << endl;
    return;
  }

  node *temp = head;
  cout << "The linked list is: ";
  while (temp != nullptr)
  {
    cout << temp->data << " |" << " ";
    temp = temp->next;
  }
  cout << endl;
}

void link_list::search()
{
  int data;
  cout << "Enter the value to search --> ";
  cin >> data;

  node *temp = head;
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

void link_list::count()
{
  int data, c = 0;
  cout << "Enter the value to count --> ";
  cin >> data;

  node *temp = head;
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

void link_list::delete_node()
{
  int value;
  cout << "Enter the value you want to delet ";
  cin >> value;
  if (!head)
    return;

  if (head->data == value)
  {
    node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  node *slow = head;
  node *fast = head->next;

  while (fast && fast->data != value)
  {
    slow = fast;
    fast = fast->next;
  }

  if (!fast)
  {
    cout << "Node not found!" << endl;
    return;
  }

  slow->next = fast->next;
  delete fast;
}

void link_list::delete_all_thelist()
{
  node *temp;
  while (head != nullptr)
  {
    temp = head;
    head = head->next;
    delete temp;
  }
  head = nullptr;
}

void link_list::test()
{
  for (int i = 10; i > 0; i--)
  {
    node *temp = new node(i);
    temp->next = head;
    head = temp;
  }
}
