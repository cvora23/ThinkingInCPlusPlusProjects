/*
 * DestructorExitProblem.cpp
 *
 *  Created on: Jun 18, 2014
 *      Author: cvora
 */

#include<iostream>
#include <stdlib.h>

using namespace std;

class A{
public:
	A(){

	}
	~A(){
		cout<<__PRETTY_FUNCTION__<<endl;
		exit(0);
	}
};

A a;

int main(){

	return 0;
}



