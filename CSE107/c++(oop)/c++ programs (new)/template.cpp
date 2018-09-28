#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include<vector>
using namespace std;

class place{
    char p[20];
public:
    void in()
    {
        cin>>p;
    }
    void out()
    {
        cout<<"Place : "<<p;
    }

};

template<class A>
class temperature:public place{
    vector<A> d,n;
public:
    void in()
    {
        place::in();
        A t;
        char c;
        for(;;)
        {
            cin>>t;
            d.push_back(t);
            cin>>t;
            n.push_back(t);
            if(cin>>c && c!='x')
                break;
        }
    }
    void out()
    {
        place::out();
        int i;
        cout<<"\nList of temperature of the day   : \n";
        for(i=0;i<d.size();i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<"\nList of temperature of the night : \n";
        for(i=0;i<n.size();i++)
        {
            cout<<n[i]<<" ";
        }
    }

};

int main()
{
temperature<int> C;
temperature<double> K;

C.in();//input for celcius
K.in();//input for kelvin


return 0;
}




