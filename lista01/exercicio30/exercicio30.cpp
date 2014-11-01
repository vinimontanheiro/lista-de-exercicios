/*
 * exercicio30.cpp
 *
 *  Created on: 18/03/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;

int main()
{
	float txfx,txkm,di,al,km,des;


	cout<<"Digite a taxa fixa:";
	cin>>txfx;

	cout<<"Digite taxa por km rodado:";
	cin>>txkm;

	cout<<"Digite a quantidade de dias:";
	cin>>di;

	cout<<"Digite os quilometros rodados:";
	cin>>km;

	al=(txfx*di)+(txkm*km);
	des=al*0.1;

	cout<<"Valor do aluguel: "<<al<<"R$";
	cout<<"Valor do desconto: "<<des<<"R$";
	cout<<"Quilometros rodados: "<<km<<"km/h";
}
