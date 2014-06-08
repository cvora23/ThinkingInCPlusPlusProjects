/*
 * constCastTest.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: cvora
 */

#include<iostream>
#include "util.h"

using namespace std;

int main()
{
	const double constarray[10] = {0};
	volatile double volatilearray[10] = {0};

	for(int i=0;i<10;i++){
		double* pDouble = const_cast<double*>(&constarray[i]);
		*pDouble = 9.9876;
	}

	for(int i=0;i<10;i++){
		double* pDouble = const_cast<double*>(&volatilearray[i]);
		*pDouble = 9.9976;
	}

	printArray((double*)constarray,10);
	printArray((double*)volatilearray,10);

	return 0;
}


