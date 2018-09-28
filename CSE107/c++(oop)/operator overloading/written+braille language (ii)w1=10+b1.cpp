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

    friend WL operator+(int m, BL b1);

};

class BL{
    float symbol;

public:

    void in(){cin>>symbol;}
    void out(){cout<<symbol<<"\n";}

    friend WL operator+(int m, BL b1);

};

    WL operator+(int m, BL b1)
    {
        WL w1;

        w1.letter = m + (b1.symbol / 10) * 26 ;
        strcpy(w1.country,"");
        strcpy(w1.name,"");

        return w1;
    }


int main()
{
    WL w1;
    BL b1;

    b1.in();

    w1=10+b1;

    w1.out();

    return 0;
}
