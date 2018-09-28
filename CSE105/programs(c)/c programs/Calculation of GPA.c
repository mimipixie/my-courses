#include<stdio.h>
int main()
{   int num1,num2,num3;
    float A=4.0,B=3.0,C=2.0,F=0.0,a1,a2,a3,GPA;

    printf("Enter numbers of three courses : \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("You have got letter grades ");

    if(num1>=80 && num1<=100)
    {   a1=A;
        printf("A, ");}
    else if(num1>=70 && num1<=79)
    {   a1=B;
        printf("B, ");}
    else if(num1>=60 && num1<=69)
    {   a1=C;
        printf("C, ");}
    else
    {   a1=F;
        printf("F, ");}

    if(num2>=80 && num2<=100)
    {   a2=A;
        printf("A, ");}
    else if(num2>=70 && num2<=79)
    {   a2=B;
        printf("B, ");}
    else if(num2>=60 && num2<=69)
    {   a2=C;
        printf("C, ");}
    else
    {   a2=F;
        printf("F, ");}

    if(num3>=80 && num3<=100)
    {   a3=A;
        printf("A");}
    else if(num3>=70 && num3<=79)
    {   a3=B;
        printf("B");}
    else if(num3>=60 && num3<=69)
    {   a3=C;
        printf("C");}
    else
    {   a3=F;
        printf("F");}

    GPA=(a1+a2+a3)/3;

    printf("\nYour GPA is %.2f\n",GPA);


    return 0;
}