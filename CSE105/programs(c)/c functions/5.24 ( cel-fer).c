#include<stdio.h>

float celsius(float );
float fahrenheit(float );

int main()
{
    int i;

    for(i=0;i<=100;i++)
    {
        printf("%10.2f",fahrenheit((float)i));
    }

    printf("\n\n");

    for(i=32;i<=212;i++)
    {
        printf("%10.2f",celsius((float)i));
    }


    return 0;
}

float celsius(float f)
{
    float c;

    c=5*(f-32)/9;

    return c;
}

float fahrenheit(float c)
{
    float f;

    f=(9*c/5)+32;

    return f;
}
