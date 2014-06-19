//: C10:NamespaceMath.h
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#ifndef NAMESPACEMATH_H
#define NAMESPACEMATH_H
#include "NamespaceInt.h"
#include<iostream>

using namespace std;

namespace Math {
  using namespace Int;
  Integer a, b;
  Integer divide(Integer a, Integer b){

	  cout<<__PRETTY_FUNCTION__<<endl;

  }

  Integer divide(){
	  cout<<__PRETTY_FUNCTION__<<endl;
  }
  // ...
} 
#endif // NAMESPACEMATH_H ///:~
