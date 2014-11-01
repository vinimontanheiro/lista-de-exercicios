/*
 * 3exercicio04.cpp
 *
 *  Created on: 22/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;
#include<string>


int main()
{
    float pc,pv,p1=0,p2=0,l=0,lt=0;
    int a=0,b=0,c=0;
    string m;

    cout<<"Informe a mercadoria desejada  ou (f) para finalizar:";
    getline(cin,m);

    while(m!="f")
    {
    	cout<<"Informe o preço de compra:";
    	cin>>pc;
    	cout<<"Informe o preço de venda:";
        cin>>pv;

        p1=p1+pc;
        p2=p2+pv;
        l=pv-pc;
        lt=lt+l;

        if(l/pc>0.1)
        {
        	a++;
        }
        else
        {
        	if(l/pc<=0.2)
        	{
        		b++;
        	}
        	else
        	{
        		c++;
        	}
        }
        cout<<"\nTotal compra:"<<p1<<"\nTotal venda:"<<p2
        <<"\nQtd lucro<10%:"<<a<<"\nQtd lucro"
        " <==20%:"<<b<<"Qtd lucro>20%"<<c<<"\nLucro Total:"<<lt<<"\n\n";
        cin.ignore();
        cout<<"Informe a mercadoria desejada  ou (f) para finalizar:";
        getline(cin,m);
    }
}
