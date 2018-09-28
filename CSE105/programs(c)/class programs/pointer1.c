#include<stdio.h>

int main(){

    int a = 10;
    int * p = &a;
    int **q = &p;
    printf("Val of a :%d\n", a);
    printf("Add of a :%d\n", &a);

    printf("Using chain of pointer variable .... \n");
    printf("Val of a: %d\n", *p);
    printf("Add of a: %d\n", p);
    printf("Add of p: %d\n", &p);
    printf("Val of a: %d\n", **q);
    printf("Val of p: %d\n", *q);
    printf("Val of q: %d\n", q);
    printf("Add of q: %d\n", &q);
    return 0;
}
