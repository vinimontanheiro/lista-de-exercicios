/*
 * 2exercicio32.cpp
 *
 *  Created on: 09/04/2012
 *      Author: casa
 */
#include<String>
#include<iostream>
using namespace std;

int main()
{
	float s,ns,df;
	string c;

	cout<<"Infome o salario: ";
	cin>>s;

	cout<<"Informe o cargo: ";
	getline(cin,c);
	cin.ignore();

	if(c=="gerente")
	{
		ns=((10/100)*s)+s;
	}
	else
	{
		if(c=="engenheiro")
		{
			ns=((20/100)*s)+s;
		}
		else
		{
			if(c=="tecnico")
			{
				ns=((30/100)*s)+s;
			}
			else
			{
				ns=((40/100)*s)+s;
			}
		}
	}

	df=ns-s;
	cout<<"Salario antigo:"<<s<<", Aumento de "<<df<<" Novo salario: "<<ns;

}


