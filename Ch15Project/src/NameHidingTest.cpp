/*
 * NameHidingTest.cpp
 *
 *  Created on: Jul 2, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class Base{
public:
	virtual void funcA(int){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
	virtual void funcA(float){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
	virtual void funcA(string){
		cout<<__PRETTY_FUNCTION__<<endl;
	}

	virtual ~Base(){

	}
};

class Derived:public Base{
public:
	virtual void funcA(int){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
};

int main(){

	Derived derived;
	derived.funcA(1);
	derived.funcA((float)4.5);
	//derived.funcA("Hello World");

	Base* pBase = &derived;
	pBase->funcA((float)4.5);
	pBase->funcA((int)4.5);
	pBase->funcA("Hello World");

	return 0;
}


