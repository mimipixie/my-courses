#include<stdio.h>

int prime(int );

int main()
{
    int i;

    for(i=1;i<=10000;i++)
    if(prime(i) == 1)
    printf("%5d",i);

    return 0;
}


int prime(int i)
{
    int j;

    for(j=2;j<i;j++)
    if(i%j==0)
    return 0;

    return 1;
}

