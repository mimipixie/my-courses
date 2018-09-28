#include<stdio.h>
int main()
{
    int a,b,i,c,r;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);

    printf("\nGCD = ");


    for(i=0;i<=a;i++)
    {   c=a/b;
        r=a%b;

        if(r==0)
            break;

        else{a=b;
             b=r;
        }
    }
        printf("%d",b);


        return 0;




}
