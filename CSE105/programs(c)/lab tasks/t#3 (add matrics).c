#include<stdio.h>

int * add_matrices(int * , int * );

int main(){

    int a[2][2],b[2][2];
    int i,j;
    int *c;


    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);


    c=add_matrices(a,b);

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%5d",*(c+2*i+j));
        printf("\n");
    }

    return 0;
}


int * add_matrices(int *a , int *b ){

    static int c[2][2]={0};
    int i,j;

    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    c[i][j]=*(a+2*i+j)+*(b+2*i+j);

    return c;

}
