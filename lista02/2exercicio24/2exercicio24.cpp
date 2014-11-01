/*
 * 2exercicio24.cpp
 *
 *  Created on: 08/04/2012
 *      Author: casa
 */
#include<String>
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,t,v;
	string ar,pm,ve,dh;

	cout<<"Infome o valor do carro:";
	cin>>v;

	cout<<"Acessorios: \nInforme 'sim' se deseja algum adicional e 'não' para recusar. ";
	cout<<"\nAr condicionado:";
	cin>>ar;
	cout<<"Pintura metalica:";
	cin>>pm;
	cout<<"Vidro eletrico:";
	cin>>ve;
	cout<<"Direção hidraulica:";
	cin>>dh;

	if(ar=="sim")
	{
		a=1750;
	}
	else
	{
		a=0;
	}
		if(pm=="sim")
		{
			b=800;
		}
		else
		{
			b=0;
		}
			if(ve=="sim")
			{
				c=1200;
			}
			else
			{
				c=0;
			}
				if(dh=="sim")
				{
					d=2000;
				}
				else
				{
					d=0;
				}

				t=v+a+b+c+d;
	cout<<"O valor do carro ficará:"<<t<<" reais.";

}



