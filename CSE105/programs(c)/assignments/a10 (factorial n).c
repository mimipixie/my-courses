#include<stdio.h>
int main()
{   unsigned long long int k,n,fac_n=1;

    printf("n = ");
    scanf("%llu",&n);

    for(k=1;k<=n;k++)
    {fac_n*=k;}

    printf("\n\nn! = %llu\n\n",fac_n);

    return 0;
}