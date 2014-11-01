/*
 * 3exercicio18.cpp
 *
 *  Created on: 26/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	float t,t1,t2,t3,total=0,p,pontos=0,dif,tp;
	int insc,c=0,i=1;


	cout<<"Informe o numero de inscricao:";
	cin>>insc;

	while(insc!=9999)
	{
		cout<<"Infome os tempos:\n 1:";cin>>t1;
		cout<<"\n n2:";cin>>t2;
		cout<<"\n n3:";cin>>t3;

		while(i<=3)
		{
		cout<<"Etapa:"<<i<<"\n";
		cout<<"Informe o tempo gasto:";
		cin>>t;"\n";

			if(i==1)
			{
				p=t1;
			}
			else
			{
				if(i==2)
				{
					p=t2;
				}
				else
				{
					if(i==3)
					{
						p=t3;
					}
				}
			}

				dif=t-p;
				dif=abs(dif);

				if(dif<3)
				{
					pontos=100;

				}
				else
				{
					if(dif>=3 && dif<=5)
					{
						pontos=80;

					}
					else
					{
						pontos=80-((dif-5)/5);

					}
				}
				cout<<"Equipe:"<<insc<<"\nEtapa:"<<i<<
				"\nPontos"<<pontos<<"\n";

				i++;
				total=total+pontos;
				if(total>pontos)
						{
							c=insc;
						}
		}
		cout<<"Equipe:"<<insc<<"\nTotal de pontos:"<<total<<"\n";

		cout<<"Informe o numero de inscricao:";
		cin>>insc;"\n";
	}
	cout<<"A equipe campea:"<<c;
}




