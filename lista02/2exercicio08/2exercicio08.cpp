/*
 * 2exercicio08.cpp
 *
 *  Created on: 28/03/2012
 *      Author: casa
 */
#include<String>
#include<iostream>
using namespace std;

int main()
{
	float m3,t,acc;
	string p;

	cout<<"Informe a conta do cliente:";
	cin>>acc;

	cout<<"Informe o perfil do cliente!:residencial-comercial-industrial:";
	cin>>p;

	cout<<"Informe quantos metros cubicos de agua: ";
	cin>>m3;


	if(m3<80)
	{
		t=m3*0.05+5;
	}
	else
	{
		if(m3>=80)
		{
			t=m3*0.25+500;
		}
		else
		{
			if(m3>=100)
			{
				t=m3*0.04+800;
			}
		}

	}

	cout<<"Conta: "<<acc<<"  Valor a ser pago: "<<t;


}


