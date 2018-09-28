#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class abc{
    int a,b,c;
public:
    virtual void in(){cout<<"provide input for a,b,c :\n";cin>>a>>b>>c;}
    virtual void out(){cout<<"a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<"\n";}

    virtual void display()=0;
};

class xyz:public abc{
    int x,y,z;
public:
    void in(){cout<<"provide input for x,y,z :\n";cin>>x>>y>>z;}
    void out(){cout<<"x = "<<x<<"\ty = "<<y<<"\tz = "<<z<<"\n";}

    void display(){cout<<".........hello..........\n";}
};

int main()
{
    xyz ob;
    abc *p;

    p=&ob;

    p->display();

    p->in();
    p->out();

    p->display();

    return 0;
}








