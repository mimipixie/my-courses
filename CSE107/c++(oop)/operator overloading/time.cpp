#include<iostream>
using namespace std;

class time{
    int h,m,s;
public:
    void input()
    {
        cin>>h>>m>>s;
    }
    void output()
    {
        cout<<"hour : "<<h<<"\tminute : "<<m<<"\tsecond : "<<s<<"\n";
    }
    time operator*(time t2)
    {
        time t;

        t.s=(s*t2.s)%60;
        t.m=(s*t2.s)/60;
        t.m+=(m*t2.m)%60;
        t.h=(m*t2.m)/60;
        t.h+=(h*t2.h);

        return t;
    }
};

int main()
{
    time t1,t2,t;

    t1.input();
    t2.input();

    t=t1*t2;

    t.output();

    return 0;
}
