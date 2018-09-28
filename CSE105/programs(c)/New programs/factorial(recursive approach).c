#include<stdio.h>
int fac(int);
int main()
{   int n;

    for(;;)
   {scanf("%d",&n);
    if(n<0)
    break;
    printf("\n%d! = %d\n\n",n,fac(n));
   }
    return 0;
}

int fac(int x)
{   int f;

    if(x==1)
    return 1;
    else
    return f=x*fac(x-1);


}