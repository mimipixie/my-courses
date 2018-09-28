#include<stdio.h>
int qualityPoints();
int main()
{
    int r;
    r=qualityPoints();

/*
    printf
*/

    return 0;
}

int qualityPoints()
{
    int average;

    scanf("%d",&average);

    if(average>=90 && average<=100)
    return 4;
    else if(average>=80 && average<=89)
    return 3;
    else if(average>=70 && average<=79)
    return 2;
    else if(average>=60 && average<=69)
    return 1;
    else
    return 0;


}
