/*
 * 3exercicio10.cpp
 *
 *  Created on: 23/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int c,p,c4=0,c5=0,c7=0,c12=0;
	float pc4,pc5,pc7,pc12,tp;

	cout<<"Informe o canal desejado:";
	cin>>c;

	while(c!=0 && p!=0)
	{
		cout<<"Informe a qtd de pessoas que esta assistindo esse canal:";
		cin>>p;

		tp=tp+p;

		if(c==4)
		{
			c4=c4+p;
		}
		else
		{
			if(c==5)
			{
				c5=c5+p;
			}
			else
			{
				if(c==7)
				{
					c7=c7+p;
				}
				else
				{
					if(c==12)
					{
						c12=c12+p;
					}

				}
			}
		}

		cout<<"Informe o canal desejado:";
		cin>>c;
	}

	pc4=(c4/tp)*100;
	pc5=(c5/tp)*100;
	pc7=(c7/tp)*100;
	pc12=(c12/tp)*100;

	cout<<"\nCanal 4:"<<pc4<<"\nCanal 5:"<<pc5<<"\nCanal 7:"<<pc7<<"\nCanal 12:"<<pc12;
}

