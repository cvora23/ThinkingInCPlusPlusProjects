//: C10:StaticDestructors.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Static object destructors
#include<iostream>
using namespace std;

class Obj {
  char c; // Identifier
public:
  Obj(char cc) : c(cc) {
    cout << "Obj::Obj() for " << c << endl;
  }
  ~Obj() {
    cout << "Obj::~Obj() for " << c << endl;
  }
};

Obj a('a'); // Global (static storage)
// Constructor & destructor always called

void f() {
  static Obj b('b');
}

void g() {
  static Obj c('c');
}

int main() {
  cout << "inside main()" << endl;
  f(); // Calls static constructor for b
  g(); //not called
  cout << "leaving main()" << endl;
} ///:~
