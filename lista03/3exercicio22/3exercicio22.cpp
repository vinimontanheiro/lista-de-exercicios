/*
 * 3exercicio22.cpp
 *
 *  Created on: 28/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int lmx=0,x,y;
	int hSTD=8,hLX,std,lx,lc,o=40,lSTD,lLX;

	cout<<"Informe o lucro do radio standard:";
	cin>>x;
	cout<<"Informe o lucro do radio luxo:";
	cin>>y;

	while(hSTD!=24)
	{
		lc=x+(hSTD*y)/2;
		hLX=o-hSTD;

		if(lc>lmx )
		{
			lmx=lc;
			lSTD=hSTD;
			lLX=hLX;
		}

		hSTD++;
	}

		hLX=16;

	while(hLX!=32)
	{
		lc=hSTD*x+(hLX*y)/2;
		hSTD=o-hLX;

		if(lc>lmx )
		{
			lmx=lc;
			lSTD=hSTD;
			lLX=hSTD;
		}
		hLX++;
	}

	std=hSTD;
	lx=hLX/2;

		cout<<"Numero de operarios na linha standard:"<<lSTD<<"\n"
				<<"Numero de operarios na linha luxo:"<<lLX<<"\n"
				<<"Numero de radios standard produzidos:"<<std<<"\n"
				<<"Numero de radios luxo produzidos:"<<lx<<"\n"<<"Lucro:"<<lmx;


}
