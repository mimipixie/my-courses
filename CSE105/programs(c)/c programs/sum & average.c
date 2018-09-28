#include<stdio.h>
int main(){
    int x,y,z;
    float a,b;
    printf("Enter integer 1 : ");
    scanf("%d",&x);
    printf("Enter integer 2 : ");
    scanf("%d",&y);
    printf("Enter integer 3 : ");
    scanf("%d",&z);

    a=x+y+z;
    b=a/3;

    printf("\n\n a) Sum of the values is %f",a);
    printf("\n\n b) Average of the values is %f\n\n",b);

    return 0;}