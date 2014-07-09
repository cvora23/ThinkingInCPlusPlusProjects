/*
 * FibonnaciFTTest.cpp
 *
 *  Created on: Jul 9, 2014
 *      Author: cvora
 */
#include<iostream>
#include"FibonnaciTemplate.h"

using namespace std;

int main(){

	for(int i=0;i<20;i++)
		cout<<fibonacci((int)0,i)<<endl;

	for(int i=0;i<20;i++)
		cout<<fibonacci((float)0,i)<<endl;

	for(int i=0;i<20;i++)
		cout<<fibonacci((long)0,i)<<endl;

	return 0;
}


