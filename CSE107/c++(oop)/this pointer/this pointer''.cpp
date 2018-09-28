#include<iostream>
#include<cstring>
using namespace std;

class abc{
    int a,b,c;
public:
    void in(){cin>>a>>b>>c;}
    void out(){cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\t"<<"c = "<<c<<"\n";}
    abc f(){a=a+20;b=b+20;c=c+20;return *this;}
};

int main()
{
    abc x,y;

    x.in();

    cout<<"Before calling f() function....... \n";

    x.out();

    y=x.f();

    cout<<"After calling f() function,, object x becomes....... \n";

    x.out();

    cout<<"After calling f() function,, object y becomes(y=x)....... \n";

    y.out();

    return 0;
}

