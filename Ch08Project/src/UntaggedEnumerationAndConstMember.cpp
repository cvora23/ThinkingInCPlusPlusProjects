/*
 * UntaggedEnumerationAndConstMember.cpp
 *
 *  Created on: Jun 17, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class Array{
	enum {size = 1000};
	int arrar[size];
	const int mVar;

public:
	Array();
};

Array::Array():mVar(199){
	cout<<mVar<<endl;
}

int main(){
	Array array;
}
