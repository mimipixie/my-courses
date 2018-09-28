#include<stdio.h>
int integerPower(int,int);
int main()
{
    int b,e,r;

    scanf("%d %d",&b,&e);

    r=integerPower(b,e);
    printf("\n%d^%d = %d",b,e,r);
    return 0;
}


int integerPower(int b,int e){
    int i,r=1;

    for(i=0;i<e;i++)
    {
        r*=b;
    }


    return r;
}
