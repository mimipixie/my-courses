#include<stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        for(j=l-i;j>0;j--)
        {
            printf(" ");

        }
        for(k=2*i-1;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
