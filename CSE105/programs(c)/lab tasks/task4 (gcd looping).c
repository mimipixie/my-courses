#include<stdio.h>
int main()
{
   int a,b,i,j,c,r;

   for(j=1;;j++)
   {printf("Enter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);

    if(a>0 && b>0)
    {printf("\nGCD = ");


     for(i=0;;i++)
     {  c=a/b;
        r=a%b;

        if(r==0)
            break;

        else{a=b;
             b=r;
            }
     }
        printf("%d\n\n\n",b);
    }

    else{break;}

   }

    printf("\n\nProgram Terminates ...\n");

        return 0;




}
