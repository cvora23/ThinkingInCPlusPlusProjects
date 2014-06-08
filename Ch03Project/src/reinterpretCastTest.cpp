/*
 * reinterpretCastTest.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: cvora
 */

#include<iostream>
#include "util.h"

using namespace std;

int main()
{
	double array[10] = {0};
	printArray(array,10);

	unsigned char* pChar = reinterpret_cast<unsigned char*>(array);
	for(unsigned char* i=pChar;i<pChar+sizeof(array);i++){
		*i = 1;
	}
	printArray(array,10);
	return 0;

}


