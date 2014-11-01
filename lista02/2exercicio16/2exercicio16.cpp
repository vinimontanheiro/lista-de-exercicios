/*
 * 2exercicio16.cpp
 *
 *  Created on: 29/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	float n1,n2,n3,m;

	cout<<"Infome suas tres notas!\n Nota1:";
	cin>>n1;
	cout<<" Nota2:";
	cin>>n2;
	cout<<" Nota3:";
	cin>>n3;

	m=(n1+n2+n3)/3;

	if(m>=6)
	{
		cout<<"Media:"<<m<<"  APROVADO!";
	}
	else
	{
		cout<<"Media:"<<m<<"  REPROVADO!";
	}
}



