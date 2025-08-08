#include <iostream>
#include "single_linklist.h"
#include "doubly_linklist.h"
#include "Circular_linklist.h"

using namespace std;

int main()
{
  string s(30, '*');
  Doubly_link_list dlist;
  link_list slist;
  CircularLinkedList listc;
  int choice = 0;

  while (choice != 4)
  {
    cout << s << endl;
    cout << "******What do you want ??*****" << endl;
    cout << "1 - Singly linked list" << endl;
    cout << "2 - Doubly linked list" << endl;
    cout << "3 - CircularLinkedList" << endl;
    cout << "4 - Exit the program" << endl;
    cout << s << endl;
    cout << "Enter your choice --> ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int inner_choice = 0;
      while (inner_choice != 11)
      {
        cout << s << endl;
        cout << "Singly Linked List Options:" << endl;
        cout << "1 - Add Node at the beginning" << endl;
        cout << "2 - Add Node at end" << endl;
        cout << "3 - Add Node at a given position" << endl;
        cout << "4 - Add node sorted" << endl;
        cout << "5 - Search in the list" << endl;
        cout << "6 - Delete the Node" << endl;
        cout << "7 - Delete All the list" << endl;
        cout << "8 - Count occurrences of a value" << endl;
        cout << "9 - Create test list" << endl;
        cout << "10 - Display the list" << endl;
        cout << "11 - Back to menu" << endl;
        cout << s << endl;
        cout << "Enter your choice --> ";
        cin >> inner_choice;

        switch (inner_choice)
        {
        case 1:
          slist.add_front();
          break;
        case 2:
          slist.add_end();
          break;
        case 3:
          slist.add_at_position();
          break;
        case 4:
          slist.add_node_sorted();
          break;
        case 5:
          slist.search();
          break;
        case 6:
          slist.delete_node();
          break;
        case 7:
          slist.delete_all_thelist();
          break;
        case 8:
          slist.count();
          break;
        case 9:
          slist.test();
          break;
        case 10:
          slist.display();
          break;
        case 11:
          cout << "Returning to main menu..." << endl;
          break;
        default:
          cout << "Invalid choice! Try again." << endl;
          break;
        }
      }
      break;
    }
    case 2:
    {
      int inner_choice = 0;
      while (inner_choice != 12)
      {
        cout << s << endl;
        cout << "Doubly Linked List Options:" << endl;
        cout << "1 - Add Node at the beginning" << endl;
        cout << "2 - Add Node at end" << endl;
        cout << "3 - Add Node at a given position" << endl;
        cout << "4 - Add node sorted" << endl;
        cout << "5 - Search in the list" << endl;
        cout << "6 - Delete the Node" << endl;
        cout << "7 - Delete All the list" << endl;
        cout << "8 - Count occurrences of a value" << endl;
        cout << "9 - Create test list" << endl;
        cout << "10 - Display the list" << endl;
        cout << "11 - Display reverse" << endl;
        cout << "12 - Back to menu" << endl;
        cout << s << endl;
        cout << "Enter your choice --> ";
        cin >> inner_choice;

        switch (inner_choice)
        {
        case 1:
          dlist.add_front();
          break;
        case 2:
          dlist.add_end();
          break;
        case 3:
          dlist.add_at_position();
          break;
        case 4:
          dlist.add_node_sorted();
          break;
        case 5:
          dlist.search();
          break;
        case 6:
          dlist.delete_Node();
          break;
        case 7:
          dlist.delete_all_thelist();
          break;
        case 8:
          dlist.count();
          break;
        case 9:
          dlist.test();
          break;
        case 10:
          dlist.display();
          break;
        case 11:
          dlist.displayRev();
          break;
        case 12:
          cout << "Returning to main menu..." << endl;
          break;
        default:
          cout << "Invalid choice! Try again." << endl;
          break;
        }
      }
      break;
    }
    case 3:
    {
      int inner_choice = 0;
      while (inner_choice != 10)
      {
        cout << s << endl;
        cout << "Circular Linked List Options:" << endl;
        cout << "1 - Add Node at the beginning" << endl;
        cout << "2 - Add Node at end" << endl;
        cout << "3 - Add Node at AfterValue" << endl;
        cout << "4 - Delete the Node at the beginning " << endl;
        cout << "5 - Delete the Node at end " << endl;
        cout << "6 - Delete the Node" << endl;
        cout << "7 - Delete All the list" << endl;
        cout << "8 - Display the list" << endl;
        cout << "9 - Create test list" << endl;
        cout << "10 - Back to menu" << endl;
        cout << s << endl;
        cout << "Enter your choice --> ";
        cin >> inner_choice;

        switch (inner_choice)
        {
        case 1:
          listc.addToFront();
          break;
        case 2:
          listc.addToEnd();
          break;
        case 3:
          listc.addAfterValue();
          break;
        case 4:
          listc.deleteFromFront();
          break;
        case 5:
          listc.deleteFromEnd();
          break;
        case 6:
          listc.deleteValue();
          break;
        case 7:
          listc.delete_AllList();
          break;
        case 8:
          listc.display();
          break;
        case 9:
          listc.test();
          break;
        case 10:
          cout << "Returning to main menu..." << endl;
          break;
        default:
          cout << "Invalid choice! Try again." << endl;
          break;
        }
      }
      break;
    }

    case 4:
      cout << "Exiting the program..." << endl;
      break;
    default:
      cout << "Invalid choice! Try again." << endl;
      break;
    }
  }
  return 0;
}
