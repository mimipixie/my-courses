#include<stdio.h>
#define PI 3.1416
int main()
{   int r;

    printf("\n\n      Radius = ");
    scanf("%d",&r);

    printf("\n\n      Area   = ");
    printf("%.2f",PI*r*r);

    printf("\n\n\n **  operation finished succesfully  !!!!! ** \n\n\n");

    return 0;
}