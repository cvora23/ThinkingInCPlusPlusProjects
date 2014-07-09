//: C16:IterIntStack.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Simple integer stack with iterators
//{L} fibonacci
#include "fibonacci.h"
#include "require.h"
#include <iostream>
using namespace std;

class IntStack {
  enum { ssize = 100 };
  int stack[ssize];
  int top;
public:
  IntStack() : top(0) {}
  void push(int i) {
    require(top < ssize, "Too many push()es");
    stack[top++] = i;
  }
  int pop() {
    require(top > 0, "Too many pop()s");
    return stack[--top];
  }
  friend class IntStackIter;
};

// An iterator is like a "smart" pointer:
class IntStackIter {
  IntStack& s;
  int index;
public:
  IntStackIter(IntStack& is) : s(is), index(0) {}
  IntStackIter(IntStack& is,bool) : s(is), index(s.top) {}

  int operator++() { // Prefix
    require(index < s.top, 
      "iterator moved out of range");
    return s.stack[++index];
  }
  int operator++(int) { // Postfix
    require(index < s.top, 
      "iterator moved out of range");
    return s.stack[index++];
  }
  // To see if you're at the end:
  bool operator==(const IntStackIter& rv) const {
    return index == rv.index;
  }
  bool operator!=(const IntStackIter& rv) const {
    return index != rv.index;
  }
};

int main() {
  IntStack is;
  for(int i = 0; i < 20; i++)
    is.push(fibonacci(i));
  // Traverse with an iterator:
  IntStackIter start(is);
  IntStackIter end(is,true);

  while(start != end)
    cout << start++ << endl;

} ///:~
