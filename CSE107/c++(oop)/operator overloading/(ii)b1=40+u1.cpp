#include<iostream>
using namespace std;

class cbd;

class cus{
    int dr,ct;
public:
    void in(){cin>>dr>>ct;}
    void out(){cout<<dr<<"\t"<<ct<<"\n";}

    friend cbd operator+(int m , cus u1);

};

class cbd{
    int tk,ps;
public:
    void in(){cin>>tk>>ps;}
    void out(){cout<<tk<<"\t"<<ps<<"\n";}

    friend cbd operator+(int m , cus u1);


};

cbd operator+(int m , cus u1)
{
    cbd b1;

    b1.tk= m + ( u1.dr * 80) ;
    b1.ps= m + ( u1.ct * 80) ;

    b1.tk = b1.tk + ( b1.ps / 100 );
    b1.ps = b1.ps % 100 ;

    return b1;
}


int main()
{
    cbd b1;
    cus u1;

    u1.in();

    b1=40+u1;
    b1.out();


    return 0;
}

