#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class A
{
protected:
    int a;
public:
    A(){a=1;}
};

class B
{
protected:
    int b;
public:
    B(){b=2;}
};

class C:public A, public B
{
protected:
    int c;
public:
    C(){c=3;}
};

class D:public C
{
protected:
    int d;
public:
    D(){d=4;}
    void out(){cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\n";}
};

class E:public C
{
protected:
    int e;
public:
    E(){e=5;}
    void out(){cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<e<<"\n";}
};

int main()
{
    D d1;
    d1.out();

    E e1;
    e1.out();


    return 0;
}








