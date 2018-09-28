#include<stdio.h>
int main()
{   int i,n[15],l=-999;

    for(i=0;i<10;i++)
    {   scanf("%d",&n[i]);
        if(l>n[i])
        l=l;
        else l=n[i];
    }

    printf("\nLargest = %d\n",l);

    return 0;
}