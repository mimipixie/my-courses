#include<iostream>
#include<string.h>
using namespace std;

class fr
{
    char raw[20],mc[20];
public:
    void in()
    {
        cin>>raw>>mc;
    }
    void out()
    {
        cout<<"\nRaw:"<<raw<<"\tCompany:"<<mc;
    }
    char* getMc()
    {
        return mc;
    }
};
class chr;
class tab:public fr
{
    int l,h,w;
public:
    void in()
    {
        fr::in();
        cin>>l>>h>>w;
    }
    void out()
    {
        fr::out();
        cout<<"\nLength:"<<l<<"\tHeight:"<<h<<"\tWidth:"<<w;
    }
    int getH()
    {
        return h;
    }
    friend void check(tab x,chr y);
};
class chr:public fr
{
    int h;
public:
    void in()
    {
        fr::in();
        cin>>h;
    }
    void out()
    {
        fr::out();
        cout<<"\nHeight:"<<h;
    }
    int getH()
    {
        return h;
    }
    friend void check(tab x,chr y);
};

void check(tab x,chr y)
{
    if(strcmp(x.getMc(),y.getMc())==0)
    {
        if(x.h>y.h)
            x.out();
        else
            y.out();
    }
    else
        cout<<"\nNot from the same company.";
}

int main()
{
    tab t1;
    chr c1;
    t1.in();
    c1.in();
    check(t1,c1);
    return 0;
}

