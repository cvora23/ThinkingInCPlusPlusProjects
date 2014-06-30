//: C12:TypeConversionFanout.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
class Orange {};
class Pear {};

class Apple {
public:
  operator Orange() const{
	  return Orange();
  }
  operator Pear() const{
	  return Pear();
  }
};

// Overloaded eat():
void eat(Orange){

}

void eat(Pear){

}

int main() {
  Apple c;
  eat((Orange)c);
  // Error: Apple -> Orange or Apple -> Pear ???
} ///:~
