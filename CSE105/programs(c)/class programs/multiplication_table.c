#include<stdio.h>
#define ROW 5
#define COL 5

int main(){

    int a [ROW][COL];
    int i, j;
    for(i=0; i<ROW; i++){
        for(j=0;j<COL; j++){
            a[j][i] = (i+1) * (j+1);
        }
    }

    for(i=0; i<ROW; i++){
        for(j=0;j<COL; j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
