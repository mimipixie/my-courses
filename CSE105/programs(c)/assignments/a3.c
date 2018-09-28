#include<stdio.h>
int main()
{   int i,j,k;
    float a,x,y,z,bb,nb,sum=0.0,count=0.0;

    for(i=1;;i++)
    {   printf("Enter account number(-1 to end) : ");
        scanf("%f",&a);

    if(a==-1)
        break;
    else
     {  printf("Enter biggining balance : ");
        scanf("%f",&bb);
        printf("Enter total charges : ");
        scanf("%f",&x);
        printf("Enter total credits : ");
        scanf("%f",&y);
        printf("Enter credit limit : ");
        scanf("%f",&z);

        nb=bb+x-y;
      if(nb>z)
       {printf("Account : %.0f",a);
        printf("\nCredit limit : %.2f",z);
        printf("\nBalance : %.2f",nb);
        printf("\nCredit Limit Exceeded. \n\n");
       }
      else
       {printf("\n");} 
     }
    }

    
    return 0;
}