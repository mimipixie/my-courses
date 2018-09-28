#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5,r1,r2,r3;

    scanf("%d",&num);

    if(num<100000)
   {d1=num/10000;
    r1=num%10000;
    d2=r1/1000;
    r2=r1%1000;
    d3=r2/100;
    r3=r2%100;
    d4=r3/10;
    d5=r3%10;

    if(d1==d5 && d2==d4)

    printf("%d is a palindrome",num);
    else
    printf("%d is not a palindrome",num);
   }
    else
    printf("Nothing to display");
    return 0;

}
