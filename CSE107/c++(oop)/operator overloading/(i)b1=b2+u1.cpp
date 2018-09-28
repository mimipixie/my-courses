#include<iostream>
using namespace std;

class cbd;

class cus{
    int dr,ct;
public:
    void in(){cin>>dr>>ct;}
    void out(){cout<<dr<<"\t"<<ct<<"\n";}

    friend cbd operator+(cbd b2 , cus u1);

};

class cbd{
    int tk,ps;
public:
    void in(){cin>>tk>>ps;}
    void out(){cout<<tk<<"\t"<<ps<<"\n";}

    friend cbd operator+(cbd b2 , cus u1);


};

    cbd operator+(cbd b2 , cus u1)
    {
        cbd b1;

        b1.tk = b2.tk + ( u1.dr * 80);
        b1.ps = b2.ps + ( u1.ct * 80);

        b1.tk = b1.tk + ( b1.ps / 100 );
        b1.ps = b1.ps % 100 ;

        return b1;
    }

int main()
{
    cbd b1,b2;
    cus u1;

    b2.in();
    u1.in();

    b1=b2+u1;
    b1.out();


    return 0;
}
