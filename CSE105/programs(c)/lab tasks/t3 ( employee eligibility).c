#include<stdio.h>
int main()
{
    int m,p,c;
    scanf("%d %d %d",&m,&p,&c);

    if(m>=60 && p>=50 && c>=40 && m+p+c>=200)
        printf("Eligible");

    else if(m+p>=150)
        printf("Eligible");

    else{printf("Not Eligible");}

    return 0;


}
