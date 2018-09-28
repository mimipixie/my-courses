#include<stdio.h>

int * add(int *m, int *n){

    int i;
    int R[5]={0};
    int * r = R;
    for(i=0; i < 5; i++){
        R[i] = *(m+i) + *(n+i);
    }

    return r;

}
int main(){
    int i;
    int A[]={1,2,3,4,5};
    int B[]={10,20,30,40,50};
    /*
    for(i = 0; i < 5; i++){
        printf("%d ", A[i]);

    }*/
    int * pA = A;
    int * pB = B;

    int *c = add(pA,pB);

    for(i = 0; i < 5; i++)
            printf("%d ",*(c+i));



    return 0;
}
