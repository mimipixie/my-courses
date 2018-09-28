#include<stdio.h>
int main()
{   int choice,num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("\nOdd or Even : Enter 1\nPositive or Negative : Enter 2\n");
    scanf("%d",&choice);

    switch(choice){
            case 1: if(num%2==0)
                        {printf("\n\nIt is an even number\n\n");}
                    else{printf("\n\nIt is an odd number\n\n");}
            break;
            case 2: if(num>=0)
                        {printf("\n\nIt is a positive number\n\n");}
                    else{printf("\n\nIt is a negative number\n\n");}
            break;
            default:printf("\n\noperation failed\n\n");}
    return 0;
}
