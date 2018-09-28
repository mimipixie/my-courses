#include<stdio.h>
float calculateCharges(float);
int main()
{
    int i;
    float h[3],c[3],th=0,tc=0;

    for(i=0;i<3;i++)
    {
        scanf("%f",&h[i]);
        c[i]=calculateCharges(h[i]);
        th+=h[i];
        tc+=c[i];

    }
    printf("Car     Hours      Charges\n");
    for(i=0;i<3;i++)
    {
        printf("%d %10.1f %10.2f\n",i+1,h[i],c[i]);
    }

    printf("Total %6.1f %10.2f",th,tc);


    return 0;
}
float calculateCharges(float h){
    float c;

    if(h<=3.0)
    c=2.0;
    else
    {c=2.0+(h-3)*.5;}

        if(c>10.0)
        c=10.0;

    return c;

}
