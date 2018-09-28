#include<stdio.h>
int fibonacci(int n );
int main()
{
    int n;

    scanf("%d",&n);

    printf("%dth term of fibonacci series is %d\n",n,fibonacci(n));

    return 0;
}

int fibonacci(int n )
{
    int a=0,b=1,c,i;

    if(n==1)
    return a;
    else
    {
        for(i=3;i<=n;i++)
      {
        c=a+b;
        a=b;
        b=c;
      }

     return b;
    }

}
