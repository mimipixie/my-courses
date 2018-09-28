#include<stdio.h>


int subtract(int *x, int *y){
    return ((*x)-(*y));
}

int main(){
    int a = 10, b = 20;
    int* p1 = &a;
    int* p2 = &b;

    printf("Value of a: %d - Address of a: %d\n",*p1,p1);

    printf("Value of b: %d - Address of b: %d\n",*p2,p2);

    printf("Sum is %d",*p1+*p2);

    printf("Subtraction is %d", subtract(p1,p2));
    return 0;
}
