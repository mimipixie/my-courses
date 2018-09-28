#include<stdio.h>

void pattern(int );

int main()
{
    int side;

    scanf("%d",&side);

    pattern(side);

    return 0;
}

void pattern(int s)
{
    int i,j;

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        printf("*");

        printf("\n");
    }


    return;
}
