#include<stdio.h>
int main()
{   double sales[5][4],s;
    int i,j;

    for(i=0;i<5;i++)
    {   for(j=0;j<4;j++)
        {   scanf("%lf",&sales[i][j]);}
    }

    for(i=0;i<5;i++)
    {   for(j=0;j<4;j++)
        {   printf("%10lf",sales[i][j]);}
        printf("\n");
    }

    printf("\nproduct no  -  total sales\n");
    for(i=0;i<5;i++)
    {   s=0;
        for(j=0;j<4;j++)
        s+=sales[i][j];
        printf("%5d     -   %15lf\n",i+1,s);
    }

    printf("\nsalesperson  -  total sales\n");
    for(j=0;j<4;j++)
    {   s=0;
        for(i=0;i<5;i++)
        s+=sales[i][j];
        printf("%5d     -   %15lf\n",j+1,s);
    }



    return 0;
}