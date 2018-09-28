#include<cstring>
#include<stdlib.h>
#include<iostream>
using namespace std;
class student{
    char id[30];
    char name[30];
    double cgpa;
    char dept[30];
public:
    void admission()
    {
        cin>>id>>name>>dept;
        cgpa=0;
    }
    void update(char *a)
    {
        if( strcmp(a,id) == 0)
        {
        cout<<"Enter update cgpa : ";
        cin>>cgpa;
        }

    }
    void probation()
    {
        if(cgpa<=2.0)
        cout<<name<<"\t"<<id<<"\t"<<dept<<"\t"<<cgpa<<"\n";
    }
    void scholarship()
    {
        if(cgpa>=3.8)
        cout<<name<<"\t"<<id<<"\t"<<dept<<"\t"<<cgpa<<"\n";
    }

};

int main()
{
    student s[10];
    int i,j,option;
    char s_id[30];
    i=0;
    while(1)
    {
        cout<<"1. admission 2.update 3.probation 4.scholarship\n";
        cin>>option;
        cout<<"--------------------------------------------------\n";
        switch(option)
        {
            case 1: s[i].admission();
            i++;
            break;

            case 2:
            cout<<"Enter student id : ";
            cin>>s_id;

            for(j=0;j<i;j++)
            {
                s[j].update(s_id);
                break;
            }
            break;

            case 3:
            for(j=0;j<i;j++)
            {
                s[j].probation();
            }
            break;

            case 4:
            for(j=0;j<i;j++)
            {
                s[j].scholarship();
            }
            break;

            case 5: exit(0);
        }
        cout<<"-------------------------------------------\n";
    }


    return 0;
}
