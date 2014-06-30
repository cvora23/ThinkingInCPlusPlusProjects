//: C12:PointerToMemberOperator.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
using namespace std;

class Dog {
public:
  int run(int i) const { 
    cout << "run\n";  
    return i; 
  }
  int eat(int i) const { 
     cout << "eat\n";  
     return i; 
  }
  int sleep(int i) const { 
    cout << "ZZZ\n"; 
    return i; 
  }
  void dance(void)const{
	    cout << "~~~~~~~~~~~~~~~"<<endl;
  }
  void barks(void)const{
	    cout << "bhow bhow"<<endl;
  }
  typedef int (Dog::*PMF)(int) const;
  typedef void (Dog::*PMF2)(void) const;

  // operator->* must return an object 
  // that has an operator():
  class FunctionObject {
    Dog* ptr;
    PMF pmem;
    PMF2 pmem2;
  public:
    // Save the object pointer and member pointer
    FunctionObject(Dog* wp, PMF pmf) 
      : ptr(wp), pmem(pmf) { 
      cout << "FunctionObject constructor\n";
    }
    FunctionObject(Dog* wp, PMF2 pmf2)
      : ptr(wp), pmem2(pmf2) {
      cout << "FunctionObject constructor\n";
    }

    // Make the call using the object pointer
    // and member pointer
    int operator()(int i) const {
      cout << "FunctionObject::operator()\n";
      return (ptr->*pmem)(i); // Make the call
    }
    // Make the call using the object pointer
    // and member pointer
    void operator()() const {
      cout << "FunctionObject::operator()\n";
      return (ptr->*pmem2)(); // Make the call
    }
  };
  FunctionObject operator->*(PMF pmf) {
    cout << "operator->*" << endl;
    return FunctionObject(this, pmf);
  }
  FunctionObject operator->*(PMF2 pmf2) {
    cout << "operator->*" << endl;
    return FunctionObject(this, pmf2);
  }

};

int main() {
  Dog w;
  Dog::PMF pmf = &Dog::run;

  cout << (w->*pmf)(1) << endl;
  pmf = &Dog::sleep;
  cout << (w->*pmf)(2) << endl;
  pmf = &Dog::eat;
  cout << (w->*pmf)(3) << endl;
  Dog::PMF2 pmf2 = &Dog::barks;
  (w->*pmf2)();

} ///:~
