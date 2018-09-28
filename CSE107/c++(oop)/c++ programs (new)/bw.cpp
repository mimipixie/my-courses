#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;

class comp2;// forward declaration..... friend func er khetre eta krte hoy

class glassware{
    char color[20];
public:
    char * get_color()
    {
        return color;
    }
};

class comp1:public glassware{
    int price,serial_no;
public:
    friend void check(comp1 x,comp2 y);
};

class comp2:public glassware{
    int price,serial_no;
public:
    friend void check(comp1 x,comp2 y);
};

void check(comp1 x,comp2 y)
{
    if( strcmp( x.get_color() , y.get_color() ) == 0 )
    {
        if( x.price < y.price)
            cout<<x.serial_no;
        else
            cout<<y.serial_no;
    }
}

int main()
{
    comp1 c1;
    comp2 c2;

    check(c1,c2);

    vector<glassware> e;
  glassware ob;
    char a;
    do{
        ob.in();
        e.push_back(ob);
    }while(cin>>a && a!='x');

    return 0;
}
