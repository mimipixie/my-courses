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

    friend WL operator+(WL w1, BL b1);

};

class BL{
    float symbol;

public:

    void in(){cin>>symbol;}
    void out(){cout<<symbol<<"\n";}

    friend WL operator+(WL w1, BL b1);

};

    WL operator+(WL w1, BL b1)
    {
        WL w2;

        w2.letter = w1.letter + (b1.symbol / 10) * 26 ;
        strcpy(w2.country,"");
        strcpy(w2.name,"");

        return w2;
    }


int main()
{
    WL w1,w2;
    BL b1;

    w1.in();
    b1.in();

    w2=w1+b1;

    w2.out();

    return 0;
}
