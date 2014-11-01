#include<stdio.h>
#include<math.h>

int main ()
{
    int i;
    float s;

    for(i=1;i<=51;i+=2)
    {
        s=1/(pow(i,3));
        s=sqrt(s*32);

        printf("pi=",s);
    }
}
