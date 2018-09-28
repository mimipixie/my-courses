#include<stdio.h>
int reversing_digits(int );
int main()
{
    int n;

    scanf("%d",&n);
    printf("%d\n",reversing_digits(n));

    return 0;
}

int reversing_digits(int m )
{
    int n=0,r[100],i,j,f=1;

    for(i=0;m!=0;i++)
    {
        r[i]=m%10;
        m/=10;
    }

    for(j=i-1;j>-1;j--)
    {
        n+=(r[j]*f);
        f*=10;
    }


    return n;
}
