#include<stdio.h>

int gcd(int , int );

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    printf("GCD = %d\n",gcd(a,b));

    return 0;
}

int gcd(int a , int b )
{
    int c,r;

    if(a>b)
   {for(;;)
    {
        c=a/b;
        r=a%b;

        if(r==0)
        break;
        else
        {a=b;
         b=r;
        }
    }
    return b;
   }


    else
   {for(;;)
    {
        c=b/a;
        r=b%a;

        if(r==0)
        break;
        else
        {b=a;
         a=r;
        }
    }
    return a;
   }



}
