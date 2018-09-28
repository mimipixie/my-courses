#include<stdio.h>
int main(){
    char a[100];
    float minute, bill;
    printf("Enter customer name:\n");
    scanf("%[^\n]s",a);
    printf("Total calls in minutes:\n");
    scanf("%f",&minute);
    if(minute > 100){
        bill = 200 + (minute-100)*1.5;
    }
    else{ // not greater than 100
        bill = 200.0;
    }
    printf("********* BILL ***********\n");
    printf("Name: %s\n", a);
    printf("Amount: %.2f", bill);
    return 0;
    }
