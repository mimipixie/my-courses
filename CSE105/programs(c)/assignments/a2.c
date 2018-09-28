#include<stdio.h>
float wp=200.0;
int main()
{   int i;
    float s,ws;

    for(i=1;;i++)
    {   printf("Enter sales in dollars (-1 to end) : ");
        scanf("%f",&s);

    if(s==-1)
        break;
    else
     {  
        ws=wp+.09*s;
        printf("Salary is %.2f\n\n",ws);

     }
    }

   
    return 0;
}