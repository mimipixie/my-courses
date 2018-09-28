#include<stdio.h>
#define SIZE 1
struct Hotel{
    char hotelName[40];
    char hotelAddress[50];
    int grade;
    double avgRoomRate;
    int numberOfRooms;
};
int main(){
    struct Hotel hotels[3];
    FILE *fp1;
    FILE *fp;
    char ch;
    /*
    int i;
    for(i=0; i<SIZE; i++){
        fprintf(stdout,"Enter info for Hotel %d\n", i+1);
        fscanf(stdin,"%[^\n]s", hotels[i].hotelName);
        fflush(stdin);
        fscanf(stdin,"%[^\n]s", hotels[i].hotelAddress);
        fflush(stdin);
        fscanf(stdin,"%d", &hotels[i].grade);
        fflush(stdin);
        fscanf(stdin,"%lf", &hotels[i].avgRoomRate);
        fflush(stdin);
        fscanf(stdin,"%d",&hotels[i].numberOfRooms);
        fflush(stdin);
    }
    fp1 = fopen("output.txt","w");
    for(i=0; i < SIZE; i++){
        fprintf(fp1,"Info for Hotel %d\n", i+1);
        fprintf(fp1,"Hotel Name: %s\n",hotels[i].hotelName);
        fprintf(fp1,"Hotel Address: %s\n",hotels[i].hotelAddress);
        fprintf(fp1,"Hotel Grade: %d\n",hotels[i].grade);
        fprintf(fp1,"Avg. Room Rate: %lf\n",hotels[i].avgRoomRate);
        fprintf(fp1,"Number of Rooms: %d\n",hotels[i].numberOfRooms);
        fprintf(fp1,"-------------------------------\n");
    }
    fclose(fp1);
    */
    fp = fopen("output.txt","r");
    while(!feof(fp)){
        ch = getc(fp);
        printf("%c",ch);
    }
    return 0;
}
