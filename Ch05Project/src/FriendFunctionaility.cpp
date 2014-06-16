/*
 * FriendFunctionaility.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: cvora
 */

#include <iostream>

using namespace std;

class X;

class Z{
public:
	void printX(X* pX);
	void printX1(X* pX);
};

class X{
private: int i;

public:
	void initialize();
	friend class Y;
	friend void Z::printX(X* pX);
};

class Y{
public:
	void printX(X* pX);
	void printX1(X* pX);
};

void X::initialize(){
	i = 0;
}

void Y::printX(X* pX){
	cout<<pX->i<<endl;
}

void Y::printX1(X* pX){
	cout<<pX->i<<endl;
}

void Z::printX(X* pX){
	cout<<pX->i<<endl;
}

void Z::printX1(X* pX){
	//cout<<pX->i<<endl;
}

int main(){
	X x;
	x.initialize();
	Y y;
	y.printX(&x);
	y.printX1(&x);

	Z z;
	z.printX(&x);
	z.printX1(&x);

	return 0;
}


