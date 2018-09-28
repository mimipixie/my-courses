#include<stdio.h>
int main(){
    float C,F;
    printf("\nEnter temperature in Celsius scale");
    scanf("%f",&C);

    F=(1.8*C)+32;

    printf("\nThe temperature in Fahrenheit scale is%f",F);

    return 0;
}
