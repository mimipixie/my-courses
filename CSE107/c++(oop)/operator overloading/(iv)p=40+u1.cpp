#include<iostream>
using namespace std;

class cus{
    int dr,ct;
public:
    void in(){cin>>dr>>ct;}
    void out(){cout<<dr<<"\t"<<ct<<"\n";}

    friend int operator+(int m , cus u1);

};


    int operator+(int m , cus u1)
    {
        int p,q;

        p = m + ( u1.dr * 80);
        q = m + ( u1.ct * 80);

        p = p + ( q / 100 );

        return p;
    }

int main()
{
    cus u1;

    u1.in();

    int p;

    p=40+u1;
    cout<<p;

    return 0;
}

