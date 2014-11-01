/*
 * exercicio14.cpp
 *
 *  Created on: 16/03/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;

int main()
{

	int qtdHoras,r,q;
	float v1,v2,t;


	cout<<"Digite a quantidade de horas: ";
	cin>>qtdHoras;

	r=qtdHoras%3;
	q=qtdHoras/3;

	v1=r*5;
	v2=q*10;
	t=v1+v2;

	cout<<"Total a pagar: "<<t<<"R$.";
}

