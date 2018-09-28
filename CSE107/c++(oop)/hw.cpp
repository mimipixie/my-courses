#include<iostream>
#include<cstring>
using namespace std;

class student{
    char id[10],name[50],dept[30];
    double cgpa;
public:
    student()
    {
        strcpy(id,"");
        strcpy(name,"");
        strcpy(dept,"");
        cgpa=0.0;
    }
    student(char *x,char *y,char *z)
    {
        strcpy(id,x);
        strcpy(name,y);
        strcpy(dept,z);
        cgpa=0.0;
    }
    student(student &ob)
    {
        strcpy(id,ob.id);
        strcpy(name,ob.name);
        strcpy(dept,ob.dept);
        cgpa=ob.cgpa;
    }
    void display()
    {
        cout<<"ID : "<<id<<"\tNAME : "<<name<<"\tDEPT : "<<dept<<"\tCGPA : "<<cgpa<<"\n";
    }

};

int main()
{
    student s[10],c[5];
    char id[10],name[50],dept[30];
    int i;

// blank info

    for(i=0;i<10;i++)
        s[i].display();

// user input

    for(i=0;i<10;i++)
    {
        cin>>id>>name>>dept;
        s[i]={id,name,dept};
    }

    for(i=0;i<10;i++)
        s[i].display();

// copy

    cout<<"\n";

    for(i=0;i<5;i++)
        c[i]={s[i]};

    for(i=0;i<5;i++)
        c[i].display();

    return 0;
}


