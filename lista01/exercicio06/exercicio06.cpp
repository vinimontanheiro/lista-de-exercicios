/*
 * exercicio06.cpp
 *Lista de exercicios sequenciais
 *  Created on: 14/03/2012
 *      Author: casa
 */

#include <iostream>
using namespace std;

int main()
{
	float imp1,imp2,resul,vc;

	cout<<"Digite o valor do carro: ";
	cin>>vc;

	imp1=0.12*vc;
	imp2=0.30*vc;
	
	resul=vc-(imp1+imp2);

	cout<<"O preço de fábrica do carro foi: "<<resul<<" reais.";

}


