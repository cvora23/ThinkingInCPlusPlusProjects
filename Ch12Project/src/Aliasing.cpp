/*
 * Aliasing.cpp
 *
 *  Created on: Jun 30, 2014
 *      Author: cvora
 */
#include "require.h"
#include <string>
#include <iostream>
using namespace std;

class AliasingTest {
  int* p;
public:
  AliasingTest(int* val): p(val){

  }
  AliasingTest(const AliasingTest& dh) : p(new int(*dh.p)) {

  }
  AliasingTest& operator=(const AliasingTest& dh) {
    // Check for self-assignment:
    if(&dh != this) {
    	if(p){
    		cout<<"Deleting internal variables"<<endl;
    		delete p;
    		p = NULL;
    	}
      p = new int(*dh.p);
    }
    return *this;
  }
  const AliasingTest* getAliasingTest() const { return this; }
  ~AliasingTest() { delete p; }
  friend ostream&
  operator<<(ostream& os, const AliasingTest& dh) {
    return os << "[" <<"] contains address:: " << dh.p<<" and value:: "<<*dh.p;
  }
};

int main() {
	AliasingTest aliasingTest(new int(100));
	cout << aliasingTest << endl;
	AliasingTest aliasingTest2 = aliasingTest; // Copy construction
	cout << aliasingTest2 << endl;
	aliasingTest = aliasingTest2; // Assignment
    cout << aliasingTest << endl;
} ///:~




