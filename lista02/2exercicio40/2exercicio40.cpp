/*
 * 2exercicio40.cpp
 *
 *  Created on: 09/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int d,m,a,qtd;

	cout<<"Informe o dia, o mes e o ano:";
	cin>>d>>m>>a;

	if(a<0)
	{
		cout<<" ANO INVALIDO ";
	}
	else
	{
		if(m>=1 && m<=12)
		{
			if(d>=1)
			{
				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
				{
					qtd=31;
				}
				else
				{
					if(m==2)
					{
						if(a%4==0)
						{
							qtd=29;
						}
						else
						{
							qtd=28;
						}
					}
				}
			}
		}
		else
		{
			qtd=30;
		}
			if(d<=qtd)
			{
				cout<<" DATA VALIDA ";
			}
			else
			{
				cout<<"DATA INVALIDA ";
			}
				if(d<1)
				{
					cout<<" DIA INVALIDO! Menor ou igual a zero ";
				}
				else
				{
					if(m<0 || m>12)
					{
						cout<<" MES INVALIDO! Infome o mes entre 1 e 12. ";
					}
				}
	}

}


