/*
 * 2exercicio18.cpp
 *
 *  Created on: 30/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{

	float n1,n2,n3,mp;;
	int cod;

	cout<<"Codigo do aluno:";
	cin>>cod;

	cout<<"Informe suas tres notas!\n Nota1:";
	cin>>n1;

	cout<<" Nota2:";
	cin>>n2;

	cout<<" Nota3:";
	cin>>n3;

	if(n1>n2 && n1>n3)
	{
	mp=(n1*4+n2*3+n3*3)/10;
	}
	else
	{
		if(n2>n1 && n2>n3)
			{
			mp=((n2*4)+(n1*3)+(n3*3))/10;
			}
		else
		{
			mp=(n3*4+n1*3+n2*3)/10;
		}


	}
		if(mp>=5)
		{
			cout<<"Codigo:"<<cod<<"\n Notas: N1:"<<n1<<" N2:"
					<<n2<<" N3:"<<n3<<"\nMedia:"<<mp<<"  APROVADO!";

		}
		else
		{
			cout<<"Codigo:"<<cod<<"\nNotas: N1:"<<n1<<" N2:"
					<<n2<<" N3:"<<n3<<"\nMedia:"<<mp<<"  REPROVADO!";

	}


}


