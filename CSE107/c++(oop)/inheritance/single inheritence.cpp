#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class fur{
    char mc[20],raw[20];
public:
    void in(){cin>>mc>>raw;}
    void out(){cout<<mc<<"\t"<<raw<<"\n";}
    int check(fur t2)
    {
        if( strcmp(mc,t2.mc)==0 )
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
    void checkL(tab t2)
    {
        if(l>t2.l)
            out();
        else
            t2.out();
    }

};
int main()
{
    tab t1,t2;

    t1.in();
    t2.in();

    if( t1.check(t2)== 0 )
        t1.checkL(t2);
    else
        cout<<"Not same company";

    return 0;
}
