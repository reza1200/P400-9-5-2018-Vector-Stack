#include <iostream>
#include "stack.h"
int main() {
  Stack s;
  s.putItem(3);
  s.getItem();
  if (s.isEmpty()) cout<<"Empty Stack";
  else cout<< s.getItem();
}