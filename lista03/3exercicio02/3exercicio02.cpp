/*
 * 3exercicio02.cpp
 *
 *  Created on: 21/04/2012
 *      Author: casa
 */



#include<iostream>
using namespace std;

int main()
{

	char s;
	float a,am=0,ah,menorA=9999,maiorA=0,media;
	int i,h,m;



	for(i=0;i<50;i++)
	{
		cout<<"Informe o sexo: ";
		cin>>s;

		cout<<"Informe a altura: ";
		cin>>a;


		if(s=='f' || s=='F')
		{
			m++;
			am=am+a;
		}
		else
		{
			h++;
		}

		if(a>maiorA)
		{
			maiorA=a;
		}
		if(a<menorA)
		{
			menorA=a;
		}
	}

	media=am/50;

	cout<<"Maior altura:"<<maiorA<<" Menor altura:"<<menorA<<
			" \n Média altura mulheres:"<<media<<" Qtd homens:"<<h;


}
