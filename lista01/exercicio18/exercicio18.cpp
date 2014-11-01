/*
 * exercicio18.cpp
 *
 *  Created on: 17/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int h,r1,r2,m,s,tSeg;

	cout<<"Informe os segundos: ";
	cin>>s;

	h=s/3600;
	r1=s%3600;

	m=r1/60;
	r2=m%60;

	cout<<"O evento durou "<<h<<"Hs "<<m<<"min e "<<r2<<"segundos.";

}


