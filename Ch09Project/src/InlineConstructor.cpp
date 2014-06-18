/*
 * InlineConstructor.cpp
 *
 *  Created on: Jun 17, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class A{
public:
	A(){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
};

class B{
private:
	A a;
public:
	B(int i){
		cout<<__PRETTY_FUNCTION__<<endl;
	}
};


int main(){

	B b[2] = {B(1),B(2)};

	return 0;
}


