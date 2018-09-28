#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,r1,r2,r3,sum;

    scanf("%d",&num);

    d1=num/1000;
    r1=num%1000;
    d2=r1/100;
    r2=r1%100;
    d3=r2/10;
    r3=r2%10;
    d4=r3;

    if(d1%2==0)
        d1=d1;
    else{d1=0;}

    if(d2%2==0)
        d2=d2;
    else{d2=0;}

    if(d3%2==0)
        d3=d3;
    else{d3=0;}

    if(d4%2==0)
        d4=d4;
    else{d4=0;}

    sum=d1+d2+d3+d4;

    printf("%d",sum);

    return 0;

}
