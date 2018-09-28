#include<stdio.h>
int main()
{   int i,j,k;

    for(i=1;i<=9;i++)
   {   if(i<=5)
      {for(j=1;j<=i-1;j++)
       printf(" ");
       for(k=1;k<=6-i;k++)
       printf("*");
      }
       else
      {for(j=1;j<=9-i;j++)
       printf(" ");
       for(k=1;k<=i-4;k++)
       printf("*");
      }
       printf("\n");
   }

    return 0;
}