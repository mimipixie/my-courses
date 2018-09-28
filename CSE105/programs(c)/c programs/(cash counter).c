#include<stdio.h>
main(){
    char p[10],q[10],r[10];
    float a,b,c,x,y,z,taka;
    printf("enter item name 1:");
    scanf("%[^\n]s",p);
    printf("enter item unit price 1:");
    scanf("%f",&x);
    printf("enter item quantity 1:");
    scanf("%f",&a);
    fflush(stdin);
    printf("enter item name 2:");
    scanf("%[^\n]s",q);
    fflush(stdin);
    printf("enter item unit price 2:");
    scanf("%f",&y);
    fflush(stdin);
    printf("enter item quantity 2:");
    scanf("%f",&b);
    fflush(stdin);
    printf("enter item name 3:");
    scanf("%[^\n]s",r);
    fflush(stdin);
    printf("enter item unit price 3:");
    scanf("%f",&z);
    fflush(stdin);
    printf("enter item quantity 3:");
    scanf("%f",&c);

    taka=(a*x)+(b*y)+(c*z);
    fflush(stdin);
    printf("Total Amount: %.2f",taka);
}
