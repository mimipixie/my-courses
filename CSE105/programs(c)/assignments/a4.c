#include<stdio.h>
int main()
{   int i;
    float h,hr,gp;

    for(i=1;;i++)
    {   printf("Enter # of hours worked (-1 to end) : ");
        scanf("%f",&h);

    if(h==-1)
        break;
    else
     {  printf("Enter hourly rate of the worker ($00.00) : ");
        scanf("%f",&hr);
        if(h<=40)
        {gp=h*hr;}
        else{gp=(hr*40)+((h-40)*1.5*hr);}
        printf("Salary is $%.2f\n\n",gp);

     }
    }


    return 0;
}