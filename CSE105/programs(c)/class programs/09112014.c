#include<stdio.h>
#define MAX 100

int main(){

    char ch='Z';
    char str1[]="Hello ";
    char str2[]="World!";
    char str3[MAX];
    int i, size;

    for(i=0; str1[i]!='\0'; i++){
        str3[i] = str1[i];
    }

    size = i;

    for(i=0; str2[i]!='\0'; i++){
        str3[size++] = str2[i];
    }
    str3[size] = '\0';

    printf("%s", str3);


    return 0;
}
