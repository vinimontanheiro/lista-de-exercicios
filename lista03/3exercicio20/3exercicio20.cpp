/*
 * 3exercicio20.cpp
 *
 *  Created on: 29/04/2012
 *      Author: casa
 */
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int i,d,m,a,s,diasS,q;
	string msg;


	for(i=0;i<=50;i++)
	{
		cout<<"Informe o dia:";
		cin>>d;
		cout<<"Informe o mes:";
		cin>>m;
		cout<<"Informe os dois primeiros digitos do ano:";
		cin>>s;
		cout<<"Informe os dois ultimos digitos do ano:";
		cin>>a;



		diasS=((2.6*m-0.2)/1+d+a+(a/4)+(s/4)-2*s)/5;

		if(diasS==0)
		{
			msg="Domingo";
		}
		else
		{
			if(diasS==1)
			{
				msg="Segunda";
			}
			else
			{
				if(diasS==2)
				{
					msg="Terca";
				}
				else
				{
					if(diasS==3)
					{
						msg="Quarta";
					}
					else
					{
						if(diasS==4)
							{
								msg="Quinta";
							}
						else
						{
							if(diasS==5)
							{
								msg="Sexta";
							}
							else
							{
								if(diasS==6)
								{
									msg="Sabado";
								}
							}
						}
					}
				}
			}
		}
		cout<<"Data:"<<d<<"/"<<m<<"/"<<s<<a<<" Dia da semana:"<<msg<<"\n";
	}

	}


