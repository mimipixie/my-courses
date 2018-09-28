#include<stdio.h>
int main()
{   int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b && a!=0 && b!=0 && c!=0)
   {if(a*a+b*b==c*c || c*c+b*b==a*a || a*a+c*c==b*b)
    printf("\nThose values can represent the sides of a right triangle\n");
    else printf("\nThose values cannot represent the sides of a right triangle\n");}

    else printf("\nThose values cannot represent the sides of a right triangle\n");
    return 0;
}