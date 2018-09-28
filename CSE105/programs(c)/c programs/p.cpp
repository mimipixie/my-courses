#include<stdio.h>

int prime(int );

int main()
{
    int i;

    //for(i=1;i<=1000003;i++)
    if(prime(1000003) == 1)
    printf("prime");

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


