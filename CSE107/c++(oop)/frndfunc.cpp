#include<stdlib.h>
#include<iostream>
using namespace std;
class cus;
class cbd{
    int tk,ps;
public:
    void in()
    {
        cout<<"Enter tk,ps:";
        cin>>tk>>ps;
    }
    void out()
    {
        cout<<"Total tk,ps : "<<tk<<"\t"<<ps;
    }
friend cbd operator+(cbd b,cus u);

};
class cus{
    int dr,ct;
public:
    void in()
    {
        cout<<"Enter dr,ct:";
        cin>>dr>>ct;
    }
friend cbd operator+(cbd b,cus u);

};

cbd operator+(cbd b,cus u)
{
    cbd ob;

    ob.tk=b.tk + u.dr*80;
    ob.ps=b.ps + u.ct*80;

    ob.tk=ob.tk + ob.ps/100;
    ob.ps=ob.ps%100;

    return ob;
}

int main()
{
    cbd b1,b2;
    cus u1;

    b1.in();
    u1.in();

    b2=b1+u1;

    b2.out();

    return 0;
}
