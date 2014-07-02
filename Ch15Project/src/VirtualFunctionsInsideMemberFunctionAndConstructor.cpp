/*
 * VirtualFunctionsInsideMemberFunctionAndConstructor.cpp
 *
 *  Created on: Jul 2, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;


class A{
public:
	A();

	virtual void funcA(void);

	virtual ~A();
};

class B:public A{
public:
	B();
	~B();
	void funcB(void);

	void funcA(void);
};

A::A(){
	cout<<__PRETTY_FUNCTION__<<endl;
	funcA();
}

A::~A(){

}

void A::funcA(void){
	cout<<__PRETTY_FUNCTION__<<endl;
}


B::B(){
	cout<<__PRETTY_FUNCTION__<<endl;
}

B::~B(){

}

void B::funcB(void){
	cout<<__PRETTY_FUNCTION__<<endl;
	funcA();
}

void B::funcA(void){
	cout<<__PRETTY_FUNCTION__<<endl;
}




int main(){

	B b;
	b.funcB();
	return 0;
}


