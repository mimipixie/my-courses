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
    vector<comp1> c1;
    comp1 x;
    vector<comp2> c2;
    comp2 y;

    //check(c1,c2);

// for comp1 objects (write+read)

    char a;
    int i,n=0,p;
    do{
        x.in();
        c1.push_back(x);
    }while(cin>>a && a!='x');

     ofstream fw("c1.txt");
    for(i=0;i<c1.size();i++)
    fw.write((char *)&c1[i],sizeof(c1[i]));

    fw.close();

    char name;
    cout<<"Enter emp name : ";
    cin>>name;

    ifstream fr("c1.txt");
    i=0;
    while(i<c1.size())
    {
        fr.read((char *)&c1[i],sizeof(c1[i]));
        if(c1[i].check(name)==0)
        {
            c1[i].out();
            break;
        }
        i++;
    }
// for comp2 objects (write+read)

    do{
        y.in();
        c2.push_back(y);
    }while(cin>>a && a!='x');

     ofstream fw2("c2.txt");
    for(i=0;i<c2.size();i++)
    fw2.write((char *)&c2[i],sizeof(c2[i]));

    fw2.close();

    cout<<"Enter emp name : ";
    cin>>name;

    ifstream fr2("c2.txt");
    i=0;
    while(i<c2.size())
    {
        fr2.read((char *)&c2[i],sizeof(c2[i]));
        if(c2[i].check(name)==0)
        {
            c2[i].out();
            break;
        }
        i++;
    }


// file update:  (read+write)


// comp1 object file update

    fstream f("c1.txt",ios::in|ios::out);

    i=0;
    while( f.read((char *)&c1[i],sizeof(c1[i])) )
    {
        if(c1[i].check_price() == 0 )
        {
            c1[i].update();
            p=f.tellg();
            p=p-sizeof(c1[i]);
            f.seekp(p,ios::beg);
            f.write((char *)&c1[i],sizeof(c1[i]));
        }
    }

// comp2 object file update

    fstream f2("c2.txt",ios::in|ios::out);

    i=0;
    while( f2.read((char *)&c2[i],sizeof(c2[i])) )
    {
        if(c2[i].check_price() == 0 )
        {
            c2[i].update();
            p=f.tellg()
            p=p-sizeof(c2[i]);
            f.seekp(p,ios::beg);
            f.write((char *)&c2[i],sizeof(c2[i]));
        }
    }



    return 0;
}
