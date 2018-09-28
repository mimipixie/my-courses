#include<iostream>
using namespace std;

class cbd{
    int tk,ps;
public:
    void in(){cin>>tk>>ps;}
    void out(){cout<<tk<<"\t"<<ps<<"\n";}

    int operator+(int m)
    {
        int p,q;

        p = tk + m;
        q = ps + m;

        p = p + q / 100 ;

        return p;

    }


};

int main()
{
    cbd b1;

    b1.in();

    int p;

    p=b1+40;
    cout<<p;

    return 0;
}

