#include<stdio.h>
int add(int , int);
int subtract(int , int);
int multiply(int , int);
int divide(int , int);
int main()
{
    int x,y,i;

    for(;;)
    {
        scanf("%d %d",&x,&y);
        if(x<0 && y<0)
            break;
        else

       {printf("%d\n", add( x, y ));
        printf("%d\n", subtract( x, y ));
        printf("%d\n", multiply( x, y ));
        printf("%d\n", divide( x, y ));
       }

    }



    return 0;
}

int add(int x, int y){

    return (x+y);
}
int subtract(int x,int y){
    return (x-y);
}
int multiply(int x,int y){
    return (x*y);
}
int divide(int x,int y){
    return (x/y);
}
