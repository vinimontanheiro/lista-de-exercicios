/*
 * exercicio24.cpp
 *
 *  Created on: 17/03/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	float vCom,dTx,vReais,ic,lu,pLu,pIcms;

	cout<<"Digite o valor da compra:";
	cin>>vCom;

	cout<<"Digite a taxa do dolar:";
	cin>>dTx;

	cout<<"Digite percentual icms:";
	cin>>ic;

	cout<<"Digite percentual do lucro:";
	cin>>lu;

	vReais=vCom*dTx;
	pIcms=(ic*100/vReais)*vReais/100;
	pLu=(lu*100/vReais)*vReais/100;
	vReais=(vCom*dTx)+pIcms+pLu;


	cout<<"Total:"<<vReais<<"R$";

}


