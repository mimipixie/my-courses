#include<stdio.h>
int fac(int);
int main()
{   int n;

    scanf("%d",&n);

    printf("\n%d! = %d\n",n,fac(n));




    return 0;
}
int fac(int x){

    int a;

    if(x==1)
        return 1;
    else a=x*fac(x-1);
    return a;
}
