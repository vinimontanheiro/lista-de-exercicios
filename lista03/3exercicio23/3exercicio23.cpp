/*
 * 3exercicio23.cpp
 *
 *  Created on: 28/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int d,dd,m,mm,a,aa,i,b=0,r,t,d2,m2;

	cout<<"Dia inicial:";cin>>d;
	i=a;
	while(d>=0)
	{
		cout<<"Mes inicial:";cin>>m;
		cout<<"Ano inicial:";cin>>a;
		cout<<"Dia final:";cin>>dd;
		cout<<"Dia final:";cin>>mm;
		cout<<"Dia final:";cin>>aa;


		m=mm-m;
		if(d==dd && m==1)
		{
			m=1;
		}
		else
		{
			if(d!=dd && m==1)
				{
					m=0;
				}
		}

		if(d==dd)
		{
			d=0;
		}
		else
		{
			if(d>dd)
			{
				d2=d-dd;
				d=d-d2;
			}
				else
				{
					d2=(dd-d)*(-1);
					d=d-d2;
				}
		}

		while(i!=aa)
		{
			r=i%4;

				if(r!=0)
				{
					b=b+360;
				}
				else
				{
					b=b+365;
				}
				i++;
		}

		a=aa-a;
		t=d+(m*30)+(a*b);
		cout<<"Dias decorridos entre as duas datas:"<<t<<"\n";
		cout<<"Dia inicial:";cin>>d;
	}
}






