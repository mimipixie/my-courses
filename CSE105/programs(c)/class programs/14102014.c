#include<stdio.h>

int main(){

    int i;
    int num;
    int countA = 0, countB = 0, countC = 0, countD = 0;
    for(i=0;i<10;i=i+1)
    {
        printf("Enter a number within 0 to 100: ");
        scanf("%d",&num);


    if(num >= 81 && num <=100)
            countA++;

        else if(num >= 61 && num <= 80){
            countB++;
        }
        else if(num >= 40 && num <= 60){
            countC++;
        }
        else
            countD++;
    }

    printf("in the range 81 to 100 - %d students\n", countA);
    printf("in the range 61 to  80 - %d students\n", countB);
    printf("in the range 41 to  60 - %d students\n", countC);
    printf("in the range  0 to  40 - %d students\n", countD);
    return 0;

}
