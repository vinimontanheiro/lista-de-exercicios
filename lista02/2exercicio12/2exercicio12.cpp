/*
 * 2exercicio12.cpp
 *
 *  Created on: 29/03/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;

int main()
{
	int n;

	cout<<"Infome um numero inteiro positivo: ";
	cin>>n;

	if(n>0 && n%3==0)
	{
		cout<<"Numero positivo e multiplo de 3";
	}
		else
		{
			cout<<"Nao e positivo e não e multiplo de 3";
		}
}

