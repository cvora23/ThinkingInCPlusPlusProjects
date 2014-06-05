/*
 * DisplayFileLines.cpp
 *
 *  Created on: Jun 5, 2014
 *      Author: cvora
 */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "util.h"
using namespace std;

int main() {
  vector<string> v;
  ifstream in("src/CirceArea.cpp");
  string line;
  string fileString;
	if(in.fail())
	{
		cout<<"File not found "<<endl;
		printCwd();
	}else{

	  while(getline(in, line))
		v.push_back(line); // Add the line to the end
	  // Add line numbers:
	  for(int i = v.size()-1; i >=0; i--){
		cout << i << ": " << v[i] << endl;
		 cin.ignore();
	  }
	  cout<<fileString<<endl;
	}
} ///:~



