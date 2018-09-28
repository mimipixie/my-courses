#include<stdio.h>
void digits();
int main()
{
    digits();

    return 0;
}

void digits()
{
    int n,r[100],i=0,j;

    scanf("%d",&n);

    while(n)
    {
        r[i]=n%10;
        n/=10;

        i++;
    }

    for(j=i-1;j>-1;j--)
    printf("%d  ",r[j]);

    return;
}
