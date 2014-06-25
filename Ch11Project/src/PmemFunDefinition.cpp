//: C11:PmemFunDefinition.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt

#include<iostream>

using namespace std;

class Simple2 { 
public: 
  int f(float) const { return 1; }
  int f(int) const{
	  cout<<"Here"<<endl;
	  return 1;
  }
};

int (Simple2::*fp)(float) const;
int (Simple2::*fp1)(int)const ;

int (Simple2::*fp2)(float) const = &Simple2::f;
int main() {

  Simple2 simple2;
  fp = &Simple2::f;

  fp1 = &Simple2::f;
  (simple2.*fp1)(1);
} ///:~
