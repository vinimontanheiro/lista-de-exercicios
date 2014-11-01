/*
 * exercicio26.cpp
 *
 *  Created on: 17/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int n,dig1,dig2,dig3,resto,rFinal;

	cout<<"Digite um número:";
	cin>>n;

	dig1=n/100;
	resto=n%100;

	dig2=resto/10;
	dig3=resto%10;

	rFinal=dig3*100+dig2*10+dig1;

	cout<<"Invertido:"<<rFinal;
}
