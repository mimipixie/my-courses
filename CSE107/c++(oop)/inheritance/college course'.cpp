#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class LabCourse;

class CollegeClass{
    char dept[20];
    int c_no,cr_hr;
    double cr_fee;
public:
    void in()
    {
        cin>>dept>>c_no>>cr_hr>>cr_fee;
    }
    void out()
    {
        cout<<dept<<"\t"<<c_no<<"\t"<<cr_hr<<"\t"<<cr_fee<<"\t";
    }
    double get_Coursefee()
    {
        return cr_fee*cr_hr;
    }
    friend double TutionFee(LabCourse c);
};

class LabCourse:public CollegeClass{
    double l_fee;
public:
    void in()
    {
        CollegeClass::in();
        cin>>l_fee;
    }
    void out()
    {
        CollegeClass::out();
        cout<<l_fee<<"\n";
    }
    friend double TutionFee(LabCourse c);
};

double TutionFee(LabCourse c)
{
    double course_fee,tution_fee;
    course_fee = c.get_Coursefee();
    tution_fee = c.cr_fee*c.cr_hr + c.l_fee;

    return tution_fee;
}

int main()
{
    LabCourse c;
    c.in();
    c.out();

    double tution_fee;

    tution_fee = TutionFee(c);

    cout<<"\nTotal tution fee is "<<tution_fee<<"\n";

    return 0;
}



