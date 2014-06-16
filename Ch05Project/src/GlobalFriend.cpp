/*
 * GlobalFriend.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: cvora
 */

#include <iostream>

using namespace std;

class X{
private: int i;

public:
void printX();
	void initialize();
	friend void h(X*,int);
};

void X::initialize(){
	i = 0;
}

void h(X* pX,int val){
	pX->i = val;
}

void X::printX(){
	cout<<i<<endl;
}


int main(){

	X x;
	x.initialize();
	x.printX();

	h(&x,5);

	x.printX();

	return 0;
}
