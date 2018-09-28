#include<stdio.h>
int main()
{   int a=0,b=1,c,i,n;

    printf("Enter value of n : ");
    scanf("%d",&n);

    printf("\nFibonacci Series :");
    printf(" %d, %d",a,b);

    for(i=1;i<=n-2;i++)
    {   c=a+b;
        printf(", %d",c);
        a=b;
        b=c;
    }

    return 0;
}