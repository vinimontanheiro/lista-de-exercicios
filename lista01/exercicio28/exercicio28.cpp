/*
 * exercicio28.cpp
 *
 *  Created on: 18/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	float ma,ac,t,w,v,comp;

	cout<<"Digite as toneladas: ";
	cin>>ma;

	cout<<"Digite a aceleração: ";
	cin>>ac;

	cout<<"Digite o tempo: ";
	cin>>t;

	ac=ac/1000;
	v=ma*ac;
	w=(ma*v*v)/2;
	comp=v*t;

	cout<<"Velocidade:"<<v<<"\n Comprimento da pista:"<<comp<<"\n Trab. Realidado:"<<w;
}


