/*]
 * 2exercicio02.cpp
 * Lista de exercicios 2 - estrutura condicional
 *  Created on: 26/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3,n4,maior=-9999,soma;

	cout<<"Digite quarto numeros:\n";
	cin>>n1>>n2>>n3>>n4;

	if(n1>maior)
	{
		maior=n1;
    }
		if(n2>maior)
		{
			maior=n2;
		}
			if(n3>maior)
			{
				maior = n3;
			}
				if(n4>maior)
				{
					maior=n4;
				}


            soma=(n1+n2+n3+n4)-maior;
            cout<<"Resultado"<<soma<<" maior"<<maior;


}
















