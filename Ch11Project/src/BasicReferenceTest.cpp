/*
 * BasicReferenceTest.cpp
 *
 *  Created on: Jun 24, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

class ReferenceTest{
public :
	int a;
	ReferenceTest(int val):a(val){

	}
};

int main(){

	//ReferenceTest &obj;

	ReferenceTest obj1(1),obj2(2);

	ReferenceTest& refObj = obj1;
	cout<<refObj.a<<endl;
	refObj = obj2;
	cout<<refObj.a<<endl;

	ReferenceTest* pReferenceTest = NULL;
	ReferenceTest& refObj2 = *pReferenceTest;

	return 0;
}


