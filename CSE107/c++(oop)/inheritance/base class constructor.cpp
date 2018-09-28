#include<iostream>
using namespace std;

class abc
{
    int a,b,c;
public:
    abc()
    {
        cout<<"Base class (class abc) default constructor is being used......\n";
        a=1;b=2;c=3;
    }
    abc(int p,int q,int r)
    {
        cout<<"Base class (class abc) parameterized constructor is being used......\n";
        a=p;b=q;c=r;
    }
    void out()
    {
        cout<<"a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<"\n";
    }
};

class xyz:public abc
{
    int x,y,z;
public:
    xyz()
    {
        cout<<"Derived class (class xyz) default constructor is being used......\n";
        x=4;y=5;z=6;
    }
    xyz(int i,int j,int k,int p,int q,int r):abc(p,q,r)
    {
        cout<<"Derived class (class xyz) parameterized constructor is being used......\n";
        x=i;y=j;z=k;
    }
    void out()
    {
        abc::out();
        cout<<"x = "<<x<<"\ty = "<<y<<"\tz = "<<z<<"\n";
    }
};

int main()
{
    xyz ob;

    cout<<"\n\nNow the object's (ob) elements will be displayed\n\n\n";

    ob.out();

    cout<<"\n----------------------------------------\n\n";

    xyz ob1(11,12,13,7,8,9);

    cout<<"\n\nNow the object's (ob1) elements will be displayed\n\n\n";

    ob1.out();


    return 0;
}

