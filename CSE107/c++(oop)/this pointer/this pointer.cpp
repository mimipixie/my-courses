#include<iostream>
#include<cstring>
using namespace std;

class abc{
    int a,b,c;
public:
    void in(){cin>>a>>b>>c;}
    void out(){cout<<a<<"\t"<<b<<"\t"<<c<<"\n";}
    abc f(){a=a+20;b=b+20;c=c+20;return *this;}
};

int main()
{
    abc x,y;

    x.in();

    x.out();

    x.f().out();


    return 0;
}
