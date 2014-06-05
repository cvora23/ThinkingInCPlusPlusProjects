/*
 * floatVectors.cpp
 *
 *  Created on: Jun 5, 2014
 *      Author: cvora
 */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<float>floats1;
	for(int i=0;i<25;i++)
		floats1.push_back(10.1+i);
	for(int i=0;i<25;i++)
		cout << i << ": " <<floats1[i]<< endl;
	vector<float>floats2;
	for(int i=0;i<25;i++)
		floats2.push_back(10.1+i);
	for(int i=0;i<25;i++)
		cout << i << ": " <<floats2[i]<< endl;
	vector<float>floats3;
	for(int i=0;i<25;i++)
		floats3.push_back(floats1[i]+floats2[i]);
	for(int i=0;i<25;i++)
		cout << i << ": " <<floats3[i]<< endl;
	for(int i=0;i<25;i++){
		floats1[i] = floats1[i]*floats1[i];
		cout << i << ": " <<floats1[i]<< endl;
	}

}


