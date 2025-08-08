#ifndef node_h
#define node_h

class node
{
public:
  int data;
  node *next;
  node(int data);
};

class node2
{
public:
  int data;
  node2 *next;
  node2 *prev;
  node2(int data);
};
class Node3
{
public:
  int data;
  Node3 *next;

  Node3(int value);
};

#endif