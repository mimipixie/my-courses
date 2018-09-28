/*function overloading :
make a func which prints
color of product when it takes
no parameter,, that func again
updates price when it takes integer
parameter (price = price - amount). */
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

    virtual void display_serial()=0;
};

class comp1:public glassware{
    int price,serial_no;
public:
    friend void check(comp1 x,comp2 y);

void display_serial()
{
    cout<<"company1 product no : "<<serial_no<<"\n";
}

int check_price()
{
    if(price>= 10000)
        return 0;
    else
        return 1;
}

void update()
{
    price= price * 0.7; // 30% discount
}

void func()
{
    cout<<get_color();
}
void func(int p)
{
    price=price-p;
}

};

class comp2:public glassware{
    int price,serial_no;
public:
    friend void check(comp1 x,comp2 y);

void display_serial()
{
    cout<<"company2 product no : "<<serial_no<<"\n";
}


int check_price()
{
    if(price>= 10000)
        return 0;
    else
        return 1;
}

void update()
{
    price= price * 0.7; // 30% discount
}


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
    comp1 x;
    comp2 y;



    return 0;
}
