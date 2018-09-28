#include<stdio.h>

int main(){
    int A[][2]={{1,2},{3,4}};

    int * p;
    int *q = A;
    int i, j;

    for(i=0; i<2; i++){
        p = A[i];
        for(j=0; j<2; j++){
            printf("%d ",*(p+j));
        }
        printf("\n");

    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++)
            printf("%d ", *(q+i+j) );
        printf("\n");
    }
    return 0;

}
