#include "node1.h"

node::node(int data)
{
  this->data = data;
  this->next = nullptr;
}

node2::node2(int data)
{
  this->data = data;
  this->next = nullptr;
  this->prev = nullptr;
}
Node3::Node3(int data)
{
  this->data = data;
  this->next = this;
}
