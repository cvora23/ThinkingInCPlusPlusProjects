/*
 * CloneTest.cpp
 *
 *  Created on: Jun 24, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class X{
private:
	X(const X&);
	int i;
public:
	X* clone()const;
	X():i(0){

	}

	void change(int i){
		this->i = i;
	}
	void printI(){
		cout<<i<<endl;
	}
};

X* X::clone()const{
	X* pX = new X;
	pX->i = i;
	return pX;
}

void testClone(const X&x){
	X* pX = x.clone();
	pX->printI();
	pX->change(6);
	pX->printI();
}


int main()
{
	X x;
	x.printI();
	x.change(5);
	x.printI();
	testClone(x);

	return 0;
}

