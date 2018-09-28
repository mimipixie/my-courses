#include<stdio.h>
#include<conio.h>
void main(){
    float ce,fa,f,c;
    printf("Enter temperature in Celsius scale:\n");
    scanf("%f",&ce);
    fa=(1.8*ce)+32;
    printf("The temperature in Fahrenheit scale is:%f\n",fa);
    printf("Enter temperature in Fahrenheit scale:\n");
    scanf("%f",&f);
    c=(f-32);
    printf("The temperature in Celsius scale is:%f\n",c);
}
