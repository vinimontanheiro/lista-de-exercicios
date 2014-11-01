/*
 * 2exercicio14.cpp
 *
 *  Created on: 29/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{

	int a,b,c;

	cout<<"Digire o valor de A:";
	cin>>a;
	cout<<"valor de B:";
	cin>>b;
	cout<<"valor de C:";
	cin>>c;

	if(a+b==c && a+c>b && b+c>a)
	{
		cout<<"EQUILATERO!";
	}
	else
	{
		if(a==b || a==c || b==c)
		{
			cout<<"ISOCELES!";
		}
		else
		{
			cout<<"ESCALENO!";
		}

	}

}



