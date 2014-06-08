/*
 * staticCastTest.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: cvora
 */
#include <iostream>

using namespace std;


void func(void* arg1,int numBytes,int value){
	int* intPtr = static_cast<int*>(arg1);
	for(int i=0;i<numBytes;i++){
		*intPtr = value;
		intPtr++;
	}
}

void printArray(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}
}

int main()
{
	int intArray[10] = {0};

	func(static_cast<void*>(intArray),sizeof(intArray)/sizeof(intArray[0]),5);

	printArray(intArray,sizeof(intArray)/sizeof(intArray[0]));

	return 0;
}



