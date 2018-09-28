#include<stdio.h>
int gcd(int , int );
int main()
{
    int x,y;

    scanf("%d %d",&x,&y);

    printf("\n GCD = %d",gcd(x,y) );

    return 0;
}


int gcd(int x , int y )
{
    static c=1;
    printf("c = %d\n",c);
    c++;
    if(x>y)/*    gcd 0 (6,4)=2
               r gcd 1 (4,2)=2
               r gcd 2 (2,0)=2
        */
    {
        if(y==0)
        return x;
        else
        return gcd(y,x%y);
    }
    else
    {
        if(x==0)
        return y;
        else
        return gcd(y%x,x);
    }

}
