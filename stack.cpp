#include "stack.h"
#include <iostream>
  Stack::Stack(){
    size=0;
  }
  bool Stack::isEmpty(){
    return v.empty();
    };
  int Stack::getItem(){
    int i = v[size-1];
    size--;
    v.pop_back();
    return i;
    }
  void Stack::putItem(int i){
    v.push_back(i);
    size++;
  }
  int Stack::sizeOf(){
    return v.size();
  }
  void Stack::erase(){
    v.clear();
  }
  void Stack::display(){
    for (int i =0; i<v.size();i++)
      std::cout<<i<<" "<<v[i]<<endl;
  }
  
