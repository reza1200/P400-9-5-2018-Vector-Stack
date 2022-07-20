#ifndef stack_h
#define stack_h
#include <vector>
using namespace std;

class Stack{
vector<int> v;
int size;
public:
  Stack();
  void display();
  bool isEmpty();
  int getItem();
  void putItem(int);
  int sizeOf();
  void erase();
  void reverse();
};
#endif
