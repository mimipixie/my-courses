#include<stdio.h>
#define ROW 3
#define COL 5
int main(){

    //int myarray[MAX] = {1,2,3,4,5,6,7,8,9,10};

    int myarray[ROW][COL];
    int last;
    float sum = 0.0, average;
    int i, j,count=0;
    // taking values from user

    for(i = 0; i < ROW; i++){
        for(j = 0; j < COL; j++){
            scanf("%d", &myarray[i][j]);
        }
    }

    //myarray[]={1,2,3,4,5,6,7,8,9,10};

    // printing values

    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%d ", myarray[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<COL;i++){
            sum = 0.0;
        for(j=0;j<ROW;j++){
            sum += myarray[j][i];
        }
    printf("%f\n",sum);
    }

    return 0;
}
