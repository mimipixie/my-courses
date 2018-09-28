#include<stdio.h>

void pattern(int , char );

int main()
{
    int side;
    char fillCharacter;

    scanf("%d",&side);
    fflush(stdin);
    scanf("%c",&fillCharacter);
    fflush(stdin);

    pattern(side,fillCharacter);

    return 0;
}

void pattern(int s , char c)
{
    int i,j;

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        printf("%c",c);

        printf("\n");
    }


    return;
}

