#include<stdio.h>
int main(){
    int a,b,p,q,r,s;
    printf("enter 1st num:");
    scanf("%d",&a);
    printf("enter 2nd num:");
    scanf("%d",&b);
    p=a+b;
    q=a-b;
    r=a*b;
    s=a/b;
    printf("%d+%d=%d\n"
           "%d*%d=%d\n"
           "%d-%d=%d\n"
           "%d/%d=%d\n",a,b,p,a,b,r,a,b,q,a,b,s);
           return 0;
}
