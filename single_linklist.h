#ifndef single_link_list
#define single_link_list
#include "node1.h"

class link_list
{
  node *head;

public:
  link_list();
  ~link_list();
  void add_node_sorted();
  void test();
  void add_front();
  void add_end();
  void add_at_position();
  void display();
  void search();
  void count();
  void delete_node();
  void delete_all_thelist();
};
#endif