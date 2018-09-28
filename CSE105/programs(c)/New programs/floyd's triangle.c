#include<stdio.h>
int main()
{   int i,j,n=1,line;
    printf("Line = ");
    scanf("%d",&line);
    printf("Floyd's Triangle:\n");
    for(i=1;i<=line;i++)
   {    for(j=1;j<=i;j++)
        {printf("%3d ",n);
         n++;}
    printf("\n");
   }

    return 0;
}