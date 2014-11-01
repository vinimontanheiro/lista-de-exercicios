#include <iostream> 
#include <stdlib.h> 
#include <iomanip> 
#include <cstdlib> 
#include <cctype> 
#include <stdio.h> 

struct cad_contato 
{ 
char nome[40]; 
char end[40]; 
char telef[12]; 
}; 

int cadast_contato(void); 
int pesq_contato(void); 


int cont = 0; 

int main(void) 
{ 
int opcao = 0; 
while(opcao != 3) 
{ 
cout << endl; 
cout << "-------------------------------" << endl; 
cout << " MinA - Mini Agenda " << endl; 
cout << "-------------------------------" << endl; 
cout << endl; 
cout << "----------------------------------------" << endl; 
cout << "[1] - Cadastro contato -" << endl; 
cout << "[2] - Alteracao e pesquisa de cadastro -" << endl; 
cout << "[3] - Sair -" << endl; 
cout << "Numero de cadastros " << cont <<" -" << endl; 
cout << "----------------------------------------" << endl; 
cout << "Escolha uma opcao.....: "; cin >> opcao; 
if (opcao != 3) 
{ 
switch(opcao) 
case 1 : cadast_contato(); break; 
// case 2 : pesq_contato(); break; 


} 


} 




// system("PAUSE"); 
return 0; 
} 


int cadast_contato(void) 
{ 
int opcao = 1, i, j; 
struct cad_contato contato[5], *pcontato, x; 
pcontato = &contato[0]; 
// esta parte do programa da entrada nos nomes da agenda e organiza na ordem afabetica. 
do 
{ 
if(cont != 4) 
{ 
cout << "\n"; 
cout << "Rotina de cadastro de contato" << endl; 
cout << "\n"; 
cout << "Nome.......:"; cin.getline(pcontato[cont].nome, sizeof(pcontato[cont].nome)); 
cout << "Endereco...:"; cin.getline(pcontato[cont].end, sizeof(pcontato[cont].end)); 
cout << "Telefone...:"; cin.getline(pcontato[cont].telef, sizeof(pcontato[cont].telef)); 
cont++; 
cout << endl; 
cout << "Deseja entrar com outro contato [1]sim [2]Nao...:"; cin >> opcao; 
} 
else 
opcao = 2; 
} 
while(opcao == 1); 
cout << "\n\n"; 
// Esta parte do programa organiza os nomes em ordem alfabetica 
for(i = 0; i <= cont - 2; i++) 
{ 
for(j = i + 1; j <= cont - 1; j++) 
{ 
if(strcmp(pcontato[i].nome, pcontato[j].nome) > 0) 
{ 
x = pcontato[i]; 
pcontato[i] = pcontato[j]; 
pcontato[j] = x; 

} 


} 

} 


return 0; 
} 