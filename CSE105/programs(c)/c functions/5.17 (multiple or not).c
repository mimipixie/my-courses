#include<stdio.h>

int multiple(int , int);

int main()
{
    int x,y,i=1,j;

    while( scanf("%d %d",&x,&y) == 2 )
    {
        j=multiple(x,y);

        if(j==1)
        printf("%d is a multiple of %d\n",y,x);
        else
        printf("%d is not a multiple of %d\n",y,x);

    }

    return 0;
}

int multiple(int x , int y )
{
    if(y%x==0)
    return 1;
    else
    return 0;
}
