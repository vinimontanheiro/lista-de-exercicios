/*
 * exercicio16.cpp
 *
 *  Created on: 17/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int a,d,m,vAno,vDia,vMes;

	cout<<"Informe o dia: ";
	cin>>d;

	cout<<"Informe o mês: ";
	cin>>m;

	cout<<"Informe o ano: ";
	cin>>a;

	vDia=(2012-a)*365;
	vMes=(2012-a)*365/12;
	vAno=2012-a;

	cout<<"Você viveu "<<vDia<<".";
}


