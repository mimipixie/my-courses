#include<stdio.h>
int main()
{
    int p,i,j,k;
    float c[100];
    scanf("%d",&p);
    k=p;
    for(i=0;i<p+1;i++)
    {
        printf("x^%d : ",k--);
        scanf("%f",&c[i]);
    }
    k=p;
    printf("y = ");
    for(i=0;i<p+1;i++)
    {
        if( c[i] < 0)
        printf("%.1fx^%d ",c[i],k);
        else if( c[i] > 0 && i>0 )
        printf("+ %.1fx^%d ",c[i],k);
        else if( c[i] > 0 && i==0)
        printf(" %.1fx^%d ",c[i],k);


        /*if(k>1)
        printf("",k);
        else if(k==1)
        printf("x ");
        else if(k==0)
        printf(" ");*/

        k--;
    }




    return 0;
}
