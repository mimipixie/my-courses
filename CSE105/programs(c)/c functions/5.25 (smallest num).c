#include<stdio.h>

float smallest(float , float , float );

int main()
{
    float x,y,z;

    scanf("%f %f %f",&x,&y,&z);

    printf("%.2f is the smallest number\n",smallest(x,y,z));


    return 0;
}


float smallest(float x , float y , float z )
{
    if(x<y && x<z)
    return x;
    else if(z<y && z<x)
    return z;
    else
    return y;
}
