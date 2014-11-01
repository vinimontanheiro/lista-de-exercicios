/*
 * exercicio10.cpp
 *
 *  Created on: 16/03/2012
 *      Author: casa
 */


#include <iostream>
using namespace std;

int main()
{
	float r,h,custo,a;

	cout<<"Informe o raio: ";
	cin>>r;

	cout<<"Informe a altura: ";
	cin>>h;

	a=(3.14*r*r*2)+(2*3.14*r*h);
	custo=a*100;

	cout<<"O custo da lata será de "<<custo<<"R$.";

}

