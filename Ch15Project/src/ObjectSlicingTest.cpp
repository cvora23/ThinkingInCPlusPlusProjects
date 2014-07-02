/*
 * ObjectSlicingTest.cpp
 *
 *  Created on: Jul 2, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class Base{
private:
	int a;
};

class Derived:public Base{
private:
	float a;
};

void testObjectSlicing(Base b){
	cout<<sizeof(b)<<endl;
}

int main(){

	Derived derived;
	cout<<sizeof(derived)<<endl;
	testObjectSlicing(derived);

	return 0;
}


