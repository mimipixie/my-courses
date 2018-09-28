#include<stdio.h>
int main()
{   float a,b,c;

    scanf("%f %f %f",&a,&b,&c);

    if(a==0 || b==0 || c==0)
    printf("\nThose values cannot represent the sides of a triangle\n");
    else if(a+b<=c || b+c<=a ||c+a<=b)
    printf("\nThose values cannot represent the sides of a triangle\n");
    else printf("\nThose values can represent the sides of a triangle\n");
    return 0;
}