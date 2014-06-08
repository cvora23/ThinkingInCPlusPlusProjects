/*
 * changeStrings.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

void changeString1(string* str){
	str->assign("Goodbye");
}

void changeString2(string& str){
	str = "Wassup";
}

int main()
{
	string str = "Hello world";
	changeString1(&str);
	cout<<str<<endl;
	changeString2(str);
	cout<<str<<endl;
}



