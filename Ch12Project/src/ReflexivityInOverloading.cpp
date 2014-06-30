//: C12:ReflexivityInOverloading.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt

#include<iostream>

using namespace std;

class Number {
  int i;
public:
  Number(int ii = 0) : i(ii) {
	  cout<<__PRETTY_FUNCTION__<<endl;
  }
  const Number
  operator+(const Number& n) const {
    return Number(i + n.i);
  }
  friend const Number
    operator-(const Number&, const Number&);
  friend const Number
    operator*(const Number&, const Number&);
  friend ostream&
  operator<<(ostream& os, const Number& num) {
    return os << "value:: "<<num.i;
  }

};

const Number
  operator-(const Number& n1,
            const Number& n2) {
    return Number(n1.i - n2.i);
}

const Number
  operator*(const Number& n1,
            const Number& n2) {
    return Number(n1.i*n2.i);
}

int main() {
  Number a(47), b(11);
  a + b; // OK
  a + 1; // 2nd arg converted to Number
//! 1 + a; // Wrong! 1st arg not of type Number
  a - b; // OK
  a - 1; // 2nd arg converted to Number
  1 - a; // 1st arg converted to Number
  cout<<b*a<<endl;
} ///:~
