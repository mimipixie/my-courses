#include<iostream>
#include<cstring>
using namespace std;

class abc{
    int a,b,c;
public:
    void in(){cin>>a>>b>>c;}
    void out(){cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\t"<<"c = "<<c<<"\n";}
    abc * f(){a=a+20;b=b+20;c=c+20;return this;}
};

int main()
{
    abc x,y;

    x.in();

    cout<<"Before calling f() function....... \n";

    x.out();

    cout<<"After calling f() function....... \n";

    x.f()->out();

    x.out();


    return 0;
}
