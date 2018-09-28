#include<stdio.h>
int main()
{   int a,b;
    char c;

    for(a=1;a<=10;a++)
    {   printf(" Number %d : ",a);
        scanf("%d",&b);

        if(b>=0)
           printf(" %d is a POSITIVE number\n\n",b);
        else{   scanf("%c",&c);}

    }

    return 0;

}
