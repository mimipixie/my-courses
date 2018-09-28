#include<iostream>
using namespace std;

class student
{
    char SId[20],dept[20],nm[20];
    double cgpa;
public:
    void in()
    {
        cout<<"\nStudent info:";
        cin>>nm>>SId>>dept>>cgpa;
    }
    void out()
    {
        cout<<"\nName:"<<nm<<"\tID:"<<SId<<"\tDept:"<<dept<<"\tCGPA:"<<cgpa;
    }
};
class emp
{
    char jdate[20],slvl[20];
    public:
    void in()
    {
        cout<<"\nEmployee info:";
        cin>>jdate>>slvl;
    }
    void out()
    {
        cout<<"\nDate:"<<jdate<<"\tSalary Level:"<<slvl;
    }

};

class TA:public student,public emp
{
    char office[20],room[20];
public:
    void in()
    {
     student::in();
     emp::in();
     cin>>office>>room;
    }
    void out()
    {

        cout<<"\nOffice hour:"<<office<<"\tRoom:"<<room;
    }
};

int main()
{
    TA x;
    x.in();
    x.student::out();
    x.emp::out();
    x.out();

    return 0;
}
