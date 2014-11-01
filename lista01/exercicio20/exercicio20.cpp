/*
 * exercicio20.cpp
 *
 *  Created on: 17/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int v,n1,n2,n3,n4,n5;

	cout<<"Digite um valor: ";
	cin>>v;

	n1=v/100;
	n2=v/50;
	n3=v/10;
	n4=v/5;
	n5=v/1;

	cout<<"O valor lido: "<<v<<"\n Notas necessárias: 100=>>"<<n1<<".\n"
	"                     50=>>"<<n2<<".\n""                     10=>>"<<n3<<".\n"
	"                      5=>>"<<n4<<".\n""                      1=>>"<<n5<<".";

}


