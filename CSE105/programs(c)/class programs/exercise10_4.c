#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct date read(struct date);
void print(struct date);

int main(){
    struct date d;

    d = read(d);
    print(d);
    return 0;
}

void print(struct date a){
    switch(a.month){
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    default:
        printf("Other Months ");

    }

    printf("%d, %d",a.day,a.year);
    return;
}
struct date read (struct date a){
    printf("Enter day: "); scanf("%d",&a.day);
    printf("Enter month: "); scanf("%d",&a.month);
    printf("Enter year: "); scanf("%d", &a.year);

    return a;
}
