/*
 * SimpleOperatorOverloading.cpp
 *
 *  Created on: Jun 30, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class Byte{
private:
	  unsigned char b;
public:
	Byte(unsigned char bb = 0) : b(bb){

	}

	~Byte(){

	}
  // Side effects: non-const member function:
  const Byte& operator++() { // Prefix
	cout << "++Byte\n";
	b++;
	return *this;
  }
  const Byte operator++(int) { // Postfix
	cout << "Byte++\n";
	Byte before(b);
	b++;
	return before;
  }
};

void g(Byte b) {
  ++b;
  b++;
}

int main() {
  Byte b;
  g(b);
} ///:~



