#include<iostream>
#include<cstring>
using namespace std;

class BL;

class WL{
    float letter;
    char country[20],name[20];

public:

    void in(){cin>>letter>>country>>name;}
    void out(){cout<<letter<<"\t"<<country<<"\t"<<name<<"\n";}

    friend BL operator+(int m, WL w1);

};

class BL{
    float symbol;

public:

    void in(){cin>>symbol;}
    void out(){cout<<symbol<<"\n";}

    friend BL operator+(int m, WL w1);

};

    BL operator+(int m, WL w1)
    {
        BL b1;

        b1.symbol = m + (w1.letter / 26) * 10 ;

        return b1;
    }


int main()
{
    WL w1;
    BL b1;

    w1.in();

    b1=20+w1;

    b1.out();

    return 0;
}

