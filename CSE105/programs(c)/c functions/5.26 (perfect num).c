#include<stdio.h>

void perfect(int );

int main()
{
    int i;

    for(i=1;i<=1000;i++)
    {
        perfect(i);
    }


    return 0;
}

void perfect(int i )
{
    int j,a[i],sum=0;

    for(j=1;j<i;j++)
    {
        if(i%j==0)
        a[j]=j;
        else
        a[j]=0;
        sum+=a[j];
    }

    if(sum==i)
    {
        printf("%d -> ",i);

        for(j=1;j<i;j++)
       {
           if(a[j]!=0)
           printf("%d  ",a[j]);
       }

        printf("\n");
    }


    return;
}
