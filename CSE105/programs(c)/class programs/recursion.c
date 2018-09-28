#include<stdio.h>

int factorial (int );


int main(){
    int n, result=1, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=n; i > 0; i--){
        result = result * i;
    }
    printf("Iterative approach: Result = %d\n", result);
    printf("Recursive approach: Result = %d\n", factorial(n));
    return 0;
}

int factorial(int x){
    int f;
    printf("Calling factorial(%d)\n", x);
    if(x==1){
            //printf("factorial(%d) = 1 \n", x);
            return 1;
    }
    else
        f = x * factorial (x-1);

    printf("factorial(%d) = %d \n", x, f);
    return f;
}