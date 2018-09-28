#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class fur{
    char mc[20],raw[20];
public:
    void in(){cin>>mc>>raw;}
    void out(){cout<<mc<<"\t"<<raw<<"\n";}

    int check(fur c)
    {
        if( strcmp(mc,c.mc)== 0)
            return 0;
        else
        {
            cout<<"Not same company\n";
            return 1;
        }
    }

};

class chr;

class tab:public fur{
    int l,w,h;
public:
    void in()
    {
        fur::in();
        cin>>l>>w>>h;
    }
    void out()
    {
        fur::out();
        cout<<l<<"\t"<<w<<"\t"<<h<<"\n";
    }
friend void checkL(tab t,chr c);

};

class chr:public fur{
    int h;
public:
    void in()
    {
        fur::in();
        cin>>h;
    }
    void out()
    {
        fur::out();
        cout<<h<<"\n";
    }
friend void checkL(tab t,chr c);

};

void checkL(tab t,chr c)
{
    if(t.h>c.h)
        cout<<t.h;
    else
        cout<<c.h;
}

int main()
{
    tab t;
    chr c;

    t.in();
    c.in();

    if( t.check(c) == 0 )
        checkL(t,c);


    return 0;
}

