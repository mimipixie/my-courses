#include<stdio.h>
int main()
{   float b,r,w;

    scanf("%f %f %f",&b,&r,&w);

    float ba=r/w,
          er=(r/b)*6,
          sr=b/w;


    printf("%f %f %f",ba,er,sr);

    return 0;
}