#include<stdio.h>
int main()
{   int i;
    float p,r,d,in;

    for(i=1;;i++)
    {   printf("Enter loan principal (-1 to end) : ");
        scanf("%f",&p);

    if(p==-1)
        break;
    else
     {  printf("Enter interest rate  : ");
        scanf("%f",&r);
        printf("Enter term of the loan in days : ");
        scanf("%f",&d);
        in=p*r*d/365;
        printf("The interest charge is $%.2f\n\n",in);
     }
    }


    return 0;
}