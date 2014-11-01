/*
 * 3exercicio16.cpp
 *
 *  Created on: 25/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int fem=0,masc=0,c,a,mm=0,mf=0,i,mi=999,insc,im=0,idM;
	char s,e;

	cout<<"Informe numero de inscricao:";
	cin>>c;

	while(c!=0)
	{

		cout<<"Informe a idade:";
		cin>>a;
		cout<<"Informe o sexo:";
		cin>>s;
		cout<<"Tem experiencia no servico:";
		cin>>e;

		if(s=='m')
		{
			masc++;
		}
		else
		{
			fem++;
		}
		if(a>45 && s=='m')
		{
			mm++;
			im=im+a;
		}
		else
		{
			if(a<35 && s=='f'&& e=='s')
			{
				mf++;
				i=a;
				if(i<mi)
				{
					mi=i;
					insc=c;
				}
			}

		}

		cout<<"Informe numero de inscricao:";
		cin>>c;

	}
	idM=im/masc;
	cout<<"\nNumero de candidatos do sexo masculino:"<<masc
			<<"\nIdade media homens acima de 45:"<<idM<<
			"\nNumero de cantidatos do sexo femino:"<<fem<<
			"\nMulheres idade inferior a 35 e com experiencia:"<<mf<<
			"\nA menor idade entre elas "<<mi<<" e o numero de incriscao:"<<insc;
}
