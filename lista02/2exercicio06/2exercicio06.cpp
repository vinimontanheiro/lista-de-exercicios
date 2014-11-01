/*
 * 2exercicio06.cpp
 *
 *  Created on: 28/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{

	int n,cp,al,disp;

	cout<<"Digite o número da sala: ";
	cin>>n;

	cout<<"Digite sua capacidade: ";
	cin>>cp;

	cout<<"Informe o total de alunos matriculados: ";
	cin>>al;

	disp=cp-al;

	if(disp>0)
	{
		cout<<"Numero da sala:"<<n<<" Capacidade:"<<cp<<" Numero de cadeiras ocupadas:"<<al
				<<" ->SALA NAO ESTA LOTADA<-";
	}
	else
	{
		cout<<"Numero da sala:"<<n<<" Capacidade:"<<cp<<" Numero de cadeiras ocupadas:"<<al<<
				" ->SALA LOTADA!<-";
	}







}

