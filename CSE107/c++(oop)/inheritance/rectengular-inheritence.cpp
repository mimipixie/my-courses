#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class rectangle
{private:
    float l,w ,area;
public:
    void in()
    {
        cin>>l>>w;
    }
    void out()
    {
        cout<<l<<w;
    }
    float aarea()
{
    return l*w;
}
};

class Block:public rectangle{

   private:
        float hi;
    public:
    void in()
    {
        rectangle::in();
        cin>>hi;
    }
    void out()
    {
        cout<<hi;
    }

    float area()
{
    float aarea=rectangle::aarea(); // aarea() func ta jehetu inherit hoyece, tai call krle (l*w) er value pathay
    return aarea*hi;// ekhane sudhu change hobe  ,, karon l and w akhn private
}
};
int main()
{
    //rectangle a;// eta neyar dorkar nai
    Block b;
    //a.in();// ei func ta block class er " in()"moddhe call koro -- evabe ---  " rectangle::in(); "
    b.in();
    float aarea=b.aarea();
    float area=b.area();
    //a.aarea();

    cout<<"\narea : "<<aarea;/*  ekhane " aarea() " ei function ta already block class e inherit hoyece ..
                                    so block class er object 'b' diye func ta call kora jay */

    cout<<"\nvolume : "<<area;

    return 0;

}
