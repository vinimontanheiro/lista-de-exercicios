/*
 * 3exercicio06.cpp
 *
 *  Created on: 22/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int t=0,h,mi,se,ho;
	float m,mf;

	cout<<"Infome o valor da massa em 'gramas':";
	cin>>m;
	mf=m;

	while(mf>0.5)
	{

		t=t+50;
		mf=mf/2;
	}

		ho=t/3600;
		t=t%3600;
		mi=t/60;
		se=t%60;

		cout<<"\nMassa inicial:"<<m<<"\nMassa Final:"<<mf<<
		"\nTempo:"<<ho<<"hs:"<<mi<<"min:"<<se<<"segundos";
}
