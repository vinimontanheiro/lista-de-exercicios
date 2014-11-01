/*
 * 3exercicio12.cpp
 *
 *  Created on: 23/04/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;
#include<string>

int main()
{
	float nf,n1,n2,n3,nm=0;
	int r=0,i,m,f,maiorN=0,menorN=999;
	string msg;

	for(i=1;i<=100;i++)
	{
		cout<<"Informe a matricula:";
		cin>>m;

		cout<<"Informe as 3 notas \n Nota1:";
		cin>>n1;
		cout<<"Nota2:";
		cin>>n2;
		cout<<"Nota3:";
		cin>>n3;

		cout<<"Informe a frequencia:";
		cin>>f;

		if(n1>maiorN)
		{
			maiorN=n1;
		}
		else
		{
			if(n2>maiorN)
			{
				maiorN=n2;
			}
			else
			{
				if(n3>maiorN)
				{
					maiorN=n3;
				}
			}
		}

		if(n1<menorN)
		{
			menorN=n1;
		}
		else
		{
			if(n2<menorN)
			{
				menorN=n2;
			}
			else
			{
				if(n3<menorN)
				{
					menorN=n3;
				}
			}
		}
		nf=(n1+n2+n3)/3;
		nm=nm+nf;
		if(f<40)
		{
			r++;
		}
		else
		{
			if(nf>=6 && f>=40)
			{
				msg="Aprovado";
			}
			else
			{
				msg="Reprovado";
			}
		}
		cout<<"Matricula:"<<m<<"\nnNota final do "
				<<i<<" aluno e:"<<nf<<"\nFrequencia:"<<f<<"\nCodigo:"<<msg<<"\n";

	}
	nm=nm/i;
	cout<<"\nMaior nota:"<<maiorN<<"\nMenor nota:"<<menorN
			<<"\nMedia da turma:"<<nm<<"\nTotal reprovados por frequencia:"<<r;
}

