/*
 * exercicio04.cpp
 *
 *  Created on: 14/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int f,c;
	float m, pol,p; p=24,4;

	cout<<"Digite a temperatura em graus Fahrenheit: ";
	cin>>f;

	cout<<"Qtd chuva em polegadas: ";
	cin>>pol;

	c=(f-32)/(9/5);
	m=pol*p;

	cout<<"Conversão em Celsius: "<<c<<"º""\n";
	cout<<"Conversão em milimetros: "<<m<<"mm""\n";


}


