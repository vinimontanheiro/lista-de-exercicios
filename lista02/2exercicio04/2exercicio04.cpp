/*
 * 2exercicio04.cpp
 *Lista de exercicios condicionais
 *  Created on: 28/03/2012
 *      Author: Vini
 */

#include<iostream>
using namespace std;

int main()
{

	int x,y;

	cout<<"Informe o valor de 'X' :";
	cin>>x;

	if(x<1)
	{
		y=x;
	}
	else
	{
		if(x==1)
		{
			y=0;
		}
		else
		{
			if(x>1)
			{
				y=x*x;
			}

		}

	}
	cout<<"O valor de 'Y' :"<<y;
}

