#include<stdio.h>
#include<string.h>

int main(){
    char str[]={"Hello World"};
    char str1[100];
    int size = strlen(str);
    int i;
    char * c = str;
    char *c1 = str1;
    for(i=0; i<size; i++){
        printf("%c ", *(str+i));

    }
    printf("\n");

    for(i=0; i<size; i++){
        *(c1+i) = *(c+i);
    }
    *(c1+i) = '\0';

    printf("%s",str1);


}
