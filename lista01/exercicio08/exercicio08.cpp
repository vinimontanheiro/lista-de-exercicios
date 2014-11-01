/*
 * exercicio08.cpp
 * Lista de exercicios sequenciais
 *  Created on: 14/03/2012
 *      Author: casa
 */

#include<string>
#include<iostream>
using namespace std;

int main()
{
	string n1,n2,n3;
	int id1,id2,id3,p1,p2,p3;
	float idMedia,pMedio;

	cout<<"Digite o primeiro nome: ";
	getline(cin,n1);
	

	cout<<"Digite a idade: ";
	cin>>id1;

	cout<<"Digite a peso: ";
	cin>>p1;
	cin.ignore();

	cout<<"Digite o segundo nome: ";
	getline(cin,n2);
	
	cout<<"Digite a idade: ";
	cin>>id2;

	cout<<"Digite a peso: ";
	cin>>p2;
	cin.ignore();

	cout<<"Digite o terceiro nome: ";
	getline(cin,n3);

	cout<<"Digite a idade: ";
	cin>>id3;

	cout<<"Digite a peso: ";
	cin>>p3;

	idMedia=(id1+id2+id3)/3;
	pMedio=(p1,p2,p3/3);

	cout<<"A idade média é "<<idMedia<<".""\n";
	cout<<"O peso médio é "<<pMedio<<".";

}


