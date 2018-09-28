#include<iostream>
using namespace std;

class student{
    char name[20],id[20],dept[20];
    float cgpa;
public:
    void in()
    {
        cin>>name>>id>>dept>>cgpa;
    }
    void out()
    {
        cout<<name<<"\t"<<id<<"\t"<<dept<<"\t"<<cgpa<<"\n";
    }

    void check(student t2)
    {
        if(cgpa>t2.cgpa)
            out();
        else
            t2.out();
    }
};

class employee{
    char Jdate[20],slv[20];
public:
    void in()
    {
        cin>>Jdate>>slv;
    }
    void out()
    {
        cout<<Jdate<<"\t"<<slv<<"\n";
    }
};

class TA:public student,public employee{
    char ohr[20],room[20];
public:
    void in()
    {
        student::in();
        employee::in();
        cin>>ohr>>room;
    }
    void out()
    {
        student::out();
        employee::out();
        cout<<ohr<<"\t"<<room<<"\n";
    }
};

int main()
{
    TA t1,t2;

    t1.student::in();
    t2.student::in();

    t1.check(t2);

    return 0;
}
