/*
 * UpcastingTest.cpp
 *
 *  Created on: Jul 1, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class Base{
public:
	void g(){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
};

class Derived1:private Base{
	void g(){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
};

class Derived2:protected Base{
	void g(){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
};

void test(Base& base){
	base.g();
}

int main(){

	Derived1 derived1;
	Derived2 derived2;

	//Base is an inaccessible base of Derived1
	//test(derived1);
	//test(derived2);

	return 0;
}

