/*
 * 3exercicio08.cpp
 *
 *  Created on: 22/04/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;

int main()
{
	int i,masc=0,fem=0,pn=0,ps=0;
	char sexo,op;
	float pFem,pMasc;

	for(i=0;i<=2000;i++)
	{
		cout<<"Infome o sexo:(f)p/ feminino (m)p/masculino:";
		cin>>sexo;

		cout<<"Avalie:Informe (s) se gostou do produto,pelo contrario (n):";
		cin>>op;

		if(op=='s')
		{
			ps++;
		}
		if(op=='n')
		{
			pn++;
		}
		if(sexo=='f' && op=='s')
		{
			fem++;
		}
		else
		{
			if(sexo=='m' && op=='n')
			{
				masc++;
			}
		}

	}



	pFem=(fem/ps)*100;
	pMasc=(masc/pn)*100;
	cout<<"\nQtd pessoas respnderam sim:"<<ps<<"\nQtd pessoas responderam não:"<<pn
			<<"\nPorcentagem feminino que disseram sim:"<<pFem<<
			"\nPorcentagem masculino que disseram não:"<<pMasc;
}

