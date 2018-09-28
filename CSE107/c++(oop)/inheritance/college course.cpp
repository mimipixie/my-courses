#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

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
    double get_Labfee()
    {
        return l_fee;
    }
};

double TutionFee(double c,double l)
{
    return c+l;
}

int main()
{
    LabCourse c;
    c.in();

    double tution_fee,course_fee,lab_fee;
    course_fee = c.get_Coursefee();
    lab_fee = c.get_Labfee();
    tution_fee = TutionFee( course_fee , lab_fee );

    cout<<"\nTotal tution fee is "<<tution_fee<<"\n";

    return 0;
}


