#include<stdio.h>
int a=10;//global
void m()
{   int b=5;//local

    printf("In m : %d and %d\n",++a,++b);
}
int main()
{   int b=1;//local

    printf("In main: %d and %d\n",++a,++b);
    m();

    return 0;


}
