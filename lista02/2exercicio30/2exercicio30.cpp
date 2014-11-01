/*
 * 2exercicio30.cpp
 *
 *  Created on: 08/04/2012
 *      Author: casa
 */
#include<String>
#include<iostream>
using namespace std;

int main()
{
	float v,t;
	int qtd,op;


	cout<<"Informe o produto:";
	cin>>op;
	cout<<"Quantidade:";
	cin>>qtd;


	if(op==1001)
	{
		v=5.32;
	}
	else
	{
		if(op==1324)
		{
			v=6.45;
		}
		else
		{
			if(op==6548)
			{
				v=2.37;
			}
			else
			{
				if(op==987)
				{
					v=5.32;
				}
				else
				{
					if(op==7623)
					{
						v=6.45;
					}
				}
			}
		}
	}
	t=v*qtd;
	cout<<"Preco total: "<<t;
}

