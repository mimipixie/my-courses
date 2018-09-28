#include<stdio.h>

int even(int );

int main()
{
    int i,j;

    while( scanf("%d",&i) == 1 )
    {
        j=even(i);
        if(j==1)
        printf("%d is an even number\n",i);
        else
        printf("%d is an odd number\n",i);

    }
}

int even(int i )
{
    if(i%2==0)
    return 1;
    else
    return 0;
}
