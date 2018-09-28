#include<stdio.h>
int integerPower(int);
int main()
{
    int e,r;

    scanf("%d",&e);

    r=integerPower(e);
    printf("%d\n",r);
    return 0;
}


int integerPower(int e){
    int i,r=1;

    for(i=0;i<e;i++)
    {
        r=r*3;
    }


    return r;
}

