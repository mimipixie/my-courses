#include<iostream>
#include<cstring>
using namespace std;

class BL{
    float symbol;

public:

    void in(){cin>>symbol;}
    void out(){cout<<symbol<<"\n";}

    friend int operator+(int m, BL b1);

};

    int operator+(int m, BL b1)
    {
        int p;

        p = m + b1.symbol ;

        return p;
    }


int main()
{
    BL b1;

    b1.in();

    int p;

    p=20+b1;

    cout<<p;

    return 0;
}
