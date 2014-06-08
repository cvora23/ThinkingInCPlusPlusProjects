/*
 * floatEncoding.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: cvora
 */

#include <iostream>
#include "printBinary.h"

using namespace std;

int main()
{
	float var = 9.8765;

	unsigned char* pChar = reinterpret_cast<unsigned char*>(&var);
	for(unsigned char* i=pChar;i<pChar+sizeof(float);i++){
		printBinary(*i);
	}
	return 0;
}



