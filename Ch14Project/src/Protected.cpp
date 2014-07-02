//: C14:Protected.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// The protected keyword
#include <fstream>
#include <iostream>
using namespace std;

class Base {
  int i;
protected:
  int read() const { return i; }
  void set(int ii) {
	  cout<<__PRETTY_FUNCTION__<<endl;
	  i = ii;
  }
public:
  Base(int ii = 0) : i(ii) {}
  int value(int m) const { return m*i; }
};

class Derived : protected Base {
  int j;
public:
  Derived(int jj = 0) : j(jj) {}
  void change(int x) { set(x); }
}; 

int main() {
  Derived d;
  d.change(10);
  //d.value(5);
} ///:~
