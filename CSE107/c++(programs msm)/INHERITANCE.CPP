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
    int check(fr x)
    {
        if(strcmp(mc,x.mc)==0)
            return 1;
        else
            return 0;
    }
};
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
    int getL()
    {
        return l;
    }
};

int main()
{
    tab t1,t2;
    t1.in();
    t2.in();
    if(t1.check(t2)==1)
    {
        if(t1.getL()>t2.getL())
            t1.out();
        else
            t2.out();
    }
    else
        cout<<"\nNot same company";
    return 0;
}

