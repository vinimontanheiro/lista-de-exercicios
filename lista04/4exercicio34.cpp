#include<stdio.h>

int main()
{
    float s;
    int v,i,c;

    for(s=0,v=225,i=29,c=1;i=1;i-=2,c*=2,v-=i)
    {

        if(v%2==1)
        {
            s=c/v-s;
        }
        else
        {
            s=c/v+s;
        }

        printf("valor:\n",s);
    }
}
