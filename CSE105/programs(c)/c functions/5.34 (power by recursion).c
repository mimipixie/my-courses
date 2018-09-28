#include<stdio.h>
int power(int , int );
int main()
{
    int b,e;

    scanf("%d %d",&b,&e);
    printf("%d^%d = %d\n",b,e,power(b,e));

    return 0;
}


int power(int b , int e )
{
    int p;

    if(e==1)
    return b;
    else
   {p=b*power(b,e-1);
    return p;
   }

}
