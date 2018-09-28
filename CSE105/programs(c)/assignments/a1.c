#include<stdio.h>
int main()
{   int i,j,k;
    float g,m,mpg,sum=0.0,count=0.0,avg;

    for(i=1;;i++)
    {   printf("Enter the gallons used (-1 to end) : ");
        scanf("%f",&g);

    if(g==-1)
        break;
    else
     {  printf("Enter the miles driven  : ");
        scanf("%f",&m);
        mpg=m/g;
        printf("The miles / gallon for this tank was %f\n\n",mpg);

        sum+=mpg;
        count++;
     }
    }

    printf("The overall average miles / gallon was %f\n",sum/count);

    return 0;
}