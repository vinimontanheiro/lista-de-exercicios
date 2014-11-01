/*
 * 2exercicio34.cpp
 *
 *  Created on: 09/04/2012
 *      Author: casa
 */

#include<String>
#include<iostream>
using namespace std;

int main()
{
	int t;
	string b;

	cout<<"Infome o bairro:";
	cin>>b;
	cout<<"Informe o telefone:";
	cin>>t;

	if(t/10000==223 || t/10000==225 || t/10000==212 || t/10000==243 )
	{
		cout<<"Numero correto:"<<t<< "Bairro:"<<b;
	}
	else
	{
		if(t/10000==223 || t/10000==224 || t/10000==215 || t/10000==295)
		{
			cout<<"Numero correto:"<<t<< "Bairro:"<<b;
		}
		else
		{
			if(t/10000==291 || t/10000==212 || t/10000==215 || t/10000==268)
			{
				cout<<"Numero correto:"<<t<< "Bairro:"<<b;
			}
			else
			{
				cout<<"Numero incorreto";
			}
		}
	}
}

