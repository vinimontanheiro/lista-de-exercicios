/*
 * 2exercicio22.cpp
 *
 *  Created on: 07/04/2012
 *      Author: Genesco
 */

#include<string>
#include<iostream>
using namespace std;

int main()
{

  int i,a,b,c,ax;
  string o;

  cout<<"Infome o valor de A";
  cin>>a;
  cout<<"Informe o valor de B";
  cin>>b;
  cout<<"Informe o valor de C";
  cin>>c;

  cout<<"Digite:\n 1- Para escrever números em ordem crescente;";
  cout<<" 2- Para escrever números em ordem decrescente.";
  cout<<" 3- Para colocar o maior número entre depois menores.";
  cin>>i;


  if(i==1)
  {
	  if(a>b || a>c)
	  {
		  if(b<c)
		  {
			  ax=a;
			  a=b;
			  b=ax;
		  }
		  	  if(c<b)
			  {
		  		  ax=a;
		  		  a=c;
		  		  c=ax;
			  }
		  	  	  if(b>c)
			  	  {
		  	  		  ax=b;
		  	  		  b=c;
		  	  		  b=ax;
			  	  }
	  }
	  o="Numero na ordem crescente.";
  }
  else
  {
	  if(i==2)
	  {
		  if(a<b || a<c)
		  {
			  if(a<b)
			  {
				  ax=b;
				  b=a;
				  a=ax;
			  }
			  	  if(b<c)
				  {
			  		  ax=c;
			  		  c=b;
			  		  b=ax;
				  }
			  	  	  if(c>b)
				  	  {
			  	  		  ax=b;
			  	  		  b=c;
			  	  		  c=ax;
				  	  }
			  	  	  	  if(a<c)
			  	  	  	  {
			  	  	  		  ax=c;
			  	  	  		  c=a;
			  	  	  		  a=ax;
			  	  	  	  }

		  }
		  o="Numero na ordem decrescente.";
	  }


  }





  	cout<<a<<b<<c<<" - "<<o;
}


