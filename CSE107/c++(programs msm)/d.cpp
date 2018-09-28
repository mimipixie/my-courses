#include<iostream>
using namespace std;
class CBD;
class CUS
{
    int dr,ct;
public:
    void in()
    {
        cin>>dr>>ct;
    }
    void out()
    {
        cout<<"\nDollar"<<dr<<"\tCent:"<<ct;
    }
friend CBD operator+(CBD a,CUS x);

};

class CBD
{
    int tk,ps;
public:
    void in()
    {
        cin>>tk>>ps;
    }
    void out()
    {
        cout<<"\nTaka:"<<tk<<"\tPaisa:"<<ps;
    }
    friend CBD operator+(CBD a,CUS x);
};
    CBD operator+(CBD a,CUS x)
    {
        CBD y;
        y.tk=a.tk+x.dr*80;
        y.ps=a.ps+x.ct*80;
        if(y.ps>=100)
        {
            y.tk+=y.ps/100;
            y.ps=y.ps%100;
        }`
        return y;
    }




int main()
{
    CBD C1,C2;
    CUS U1;
    C1.in(); U1.in();
    C2=C1+U1;
    C2.out();
    return 0;
}
