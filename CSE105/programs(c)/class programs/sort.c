#include<stdio.h>
void sorting(int [], int, char[]);

int main(){
    int a[] = {40,90,73,81,35};
    int i;
    int size = sizeof(a)/sizeof(int);
    printf("Size: %d \n", size);
    printf("Before Sorting ... ");
    for(i=0; i < size ; i++)
        printf("%d ", a[i]);
    printf("\n");
    sorting(a, size, "Sorting will be executed now");
    printf("After Sorting ... ");
    for(i=0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

void sorting(int p[], int size, char n[]){
    int i, j, temp;

    printf("%s", n );

    for(i=0; i < size - 1; i++){
        for(j=1; j < size - i; j++){
            if(p[j-1] < p[j]){
                temp = p[j-1];
                p[j-1] = p[j];
                p[j] = temp;
            }
        }
    }
}
