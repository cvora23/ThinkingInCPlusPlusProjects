/*
 * WordCountInFile.cpp
 *
 *  Created on: Jun 5, 2014
 *      Author: cvora
 */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include "util.h"
using namespace std;


int main()
{
	ifstream in("src/CirceArea.cpp");
	string line;
	string currentWord;
	string wordToFind = "radius";
	int wordCount = 0;
	vector<string> v;

	if(in.fail())
	{
		cout<<"File not found "<<endl;
		printCwd();
	}else{
		while(in >> currentWord)
		{
			if(!strcmp(currentWord.c_str(),wordToFind.c_str())){
				wordCount++;
			}
			v.push_back(currentWord);
		}
		cout << "WORD COUNT FOR " << wordToFind << " is: " <<wordCount<< endl;
		for(unsigned int i = 0; i < v.size(); i++)
			cout << i << ": " << v[i] << endl;
	}
}





