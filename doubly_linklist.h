#ifndef doubly_linklist
#define doubly_linklist
#include "node1.h"

class Doubly_link_list
{
  node2 *head;

public:
  Doubly_link_list();
  ~Doubly_link_list();
  void add_node_sorted();
  void test();
  void add_front();
  void add_end();
  void add_at_position();
  void display();
  void displayRev();
  void search();
  void count();
  void delete_Node();
  void delete_all_thelist();
};

#endif