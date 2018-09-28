#include<stdio.h>
int main()
{   unsigned long long int n[10000],fac_n=1,fac__n[10000];
    int i,j,k,T;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
   {scanf("%llu",&n[i]);
    for(k=1;k<=n[i];k++)
    {fac_n*=k;}
    fac__n[i]=fac_n;
   }

    for(j=1;j<=T;j++)
   {printf("Case %d: %llu\n",j,fac__n[j]);}


    return 0;
}