#include<stdio.h>
int main()
{   int n,i,f;

    for(;;)
   {scanf("%d",&n);
    if(n<0)
    break;
    //else if(n==0)
    //f=1;
    else
    f=1;
    for(i=1;i<=n;i++)
    f*=i;
    printf("\n%d! = %d\n\n",n,f);
   }

    return 0;
}