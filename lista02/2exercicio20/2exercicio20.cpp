/*
 * 2exercicio20.cpp
 *
 *  Created on: 01/04/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;

int main()
{
	float h,p;
	char s;

	cout<<"Informe sua altura:";
	cin>>h;

	cout<<"Informe seu sexo, 'm - masculino ou f - feminino:";
	cin>>s;

	if(s=='m')
	{
		p=(72.7*h)-58;
	}
	else
	{
		p=(62.1*h)-44.7;
	}

	cout<<"Peso ideal:"<<p;

}

