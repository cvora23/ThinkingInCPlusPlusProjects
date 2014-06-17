/*
 * ConstCAndCPlusPlusc.cpp
 *
 *  Created on: Jun 17, 2014
 *      Author: cvora
 */


#include<cstdio>

using namespace std;

int main()
{
	const int val1 = 1,val2 = 2,val3 = 3;
	int array[val1+val2+val3] = {5};

	for(unsigned int i=0;i<sizeof(array)/sizeof(array[0]);i++){
		printf("Value is %d \n",array[i]);
	}
}

