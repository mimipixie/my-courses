#include<iostream>
#include<cstring>
using namespace std;

class fur{
    char rm[20],mc[20];
public:
    void in(){cin>>rm>>mc;}
    void out(){cout<<rm<<"\t"<<mc<<"\n";}

    int check(fur t2)
    {
        if( strcmp(mc,t2.mc) == 0 )
            return 0;
        else
            return 1;
    }
};

class tab:public fur{
    int l,w,h;
public:
    void in(){fur::in();cin>>l>>w>>h;}
    void out(){fur::out();cout<<l<<"\t"<<w<<"\t"<<h<<"\n";}

    tab compare(tab t2)
    {
        if( check(t2) == 0)
        {
            if( l>t2.l && w>t2.w && h>t2.h)
                return *this;
            else
                return t2;
        }
    }
};


int main()
{
    tab t1,t2,t3;

    t1.in();
    t2.in();

    t3=t1.compare(t2);

    t3.out();

    return 0;
}

