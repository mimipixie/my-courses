#include<stdio.h>

void print(int *);

int main()
{
    int a[10],i;
    int * p=a;


    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    print(p);

    return 0;
}


void print(int * a){
    int i;

    for(i=9;i>=0;i--)
    printf("%d\n",*(a+i));

    return;

}

