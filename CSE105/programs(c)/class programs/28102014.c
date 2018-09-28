#include<stdio.h>

int main(){

    int i, j, sum;

    // for loop
    int n=1;

    printf("Floyd's Triangle\n");

    for(i=1;i<=10;i++){
        for(j=1;j<=i;j++){
            printf("%3d ", n);
            n++;
        }
        printf("\n");

    }
    printf("\n");
    printf("Sum series: ");
    sum = 0;
    i = 0;
    while(sum<=100){

        printf("%d ", sum);
        i++;
        sum += i;

    }
    printf("Using for loop: ");

    printf("\n");
    for(i=2; i<=10; i=i+2){
                printf("%d ", i);
    }
    // while loop
    printf("\nUsing while loop: ");
    i=1;
    while(i<=0){
        printf("%d ", i);
        i++;
    }

    // do .. while loop
    printf("\nUsing do .. while loop ");
    i=1;
    do{
        printf("%d ", i);
        i++;
    } while(i <= 0);




}
