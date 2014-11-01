/*
 * 2exercicio26.cpp
 *
 *  Created on: 09/04/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
 int n1,n2,n3=0,n4;

 cout<<"Informe um numero inteiro:";
 cin>>n1;

 n2=n1;
 n4=n2 % 10;
 n3=(n3 * 10)+n4;
 n2=n2/10;

 if(n1==n3)
 {
    cout<<"Palindromo";
 }
 else
 {
    cout<<"Nao e Palindromo";
 }
}
