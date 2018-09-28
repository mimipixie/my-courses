#include<stdio.h>
int main()
{
    static count=1;
    printf("calling main %dth time ......\n",count++);
    if(count==11)
    return 0;
    else
    return main();
}
