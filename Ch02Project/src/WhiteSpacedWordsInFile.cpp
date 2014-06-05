/*
 * WhiteSpacedWordsInFile.cpp
 *
 *  Created on: Jun 5, 2014
 *      Author: cvora
 */
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void printCwd()
{
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
        fprintf(stdout, "Current working dir: %s\n", cwd);
    else
        perror("getcwd() error");

}

int main()
{
	vector<string> v;
	ifstream in("src/CirceArea.cpp");
	string line;
	string currentWord;

	if(in.fail())
	{
		cout<<"File not found "<<endl;
		printCwd();
	}else{
		while(in >> currentWord)
			v.push_back(currentWord);
		for(unsigned int i = 0; i < v.size(); i++)
			cout << i << ": " << v[i] << endl;
	}
}


