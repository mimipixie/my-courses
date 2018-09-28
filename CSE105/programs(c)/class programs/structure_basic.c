#include<stdio.h>
#include<string.h>

struct Student{
    int student_id;
    char student_name[20];
    int marks[3];
    double gpa;
};

int main(){
    //struct Student s={1,"A",2.0};

    struct Student s[5];
    int i, j;

    for(i=0;i<5;i++){
        printf("Enter student id: ");
        scanf("%d",&s[i].student_id);
        fflush(stdin);
        printf("Enter student name: ");
        scanf("%[^\n]s",s[i].student_name);
        fflush(stdin);
        for(j=0;j<3;j++){
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d",&s[i].marks[j]);
            fflush(stdin);
        }
    }

    printf("Student ID \t Student Name \t Subject 1 \t Subject 2 \t Subject 3\n");
    for(i=0;i<5;i++){
        //printf("Enter student id: ");
        printf("%d\t",s[i].student_id);
        printf("%s\t", s[i].student_name);
        for(j=0;j<3;j++){
            //printf("Enter marks for subject %d: ", j+1);
            printf("%d\t",s[i].marks[j]);
        }
        printf("\n");
    }


    return 0;


}


