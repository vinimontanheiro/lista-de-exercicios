#include<iostream>
using namespace std;

int main()
{
    float s=1;
    int i;

    for(i=1;i<=50;i++)
    {
        s=s+(i*2)-1/i;
    }
    cout<<"Valor de S: "<<s;

}
