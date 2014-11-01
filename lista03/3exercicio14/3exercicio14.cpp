/*
 * 3exercicio14.cpp
 *
 *  Created on: 25/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	float e,t,v=20,k1=0,k2=1;

	while(k1!=k2)
	{
		cout<<"Informe a quilometragem 1:";
		cin>>k1;
		cout<<"Informe a quilometragem 2:";
		cin>>k2;

		e=k2-k1;

		while(v<=80)
		{
			t=e/v;


			if(t>2)
				{
					cout<<"Velocidade:"<<v<<"km/h\n Tempo gasto:"<<t<<"hs\n\n";
				}
				v=v+10;

		}


	}

}


