#include<math.h>
#define PI 3.1416
int main()
{   int a;
    float x,y;

    scanf("%d",&a);

    x=(PI/180)*a;

    y=cos(x);

    printf("   RESULT = %.2f",y);

    return 0;
}