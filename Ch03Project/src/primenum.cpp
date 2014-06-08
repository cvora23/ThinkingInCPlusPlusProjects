/*
 * primenum.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: cvora
 */

#include<iostream>

using namespace std;

int main()
{
	for(int j=2;j<=100;++j)
	{
	    int i=2;
	    for(;i<=j-1;i++)
	    {
	        if(j%i == 0)
	            break;
	    }

	    if(i==j && i != 2)
	        cout<<j<<endl;
	}
}


