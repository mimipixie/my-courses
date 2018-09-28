#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;

class bank{
    char name[20],date[20];
    int ac_nm,balance;
public:
    void in()
    {
        cin>>name>>ac_nm>>balance>>date;
    }
    void out()
    {
        cout<<name<<"\t"<<ac_nm<<"\t"<<balance<<"\t"<<date<<"\n";
    }
    int get_balance()
    {
        return balance;
    }
};

class loan:public bank{
    int amount,duration;
public:
    void in()
    {
        bank::in();
        cin>>amount>>duration;
    }
    void out()
    {
        bank::out();
        cout<<amount<<"\t"<<duration<<"\n";
    }
    friend void compare(loan ob);
};

void compare(loan ob)
{
    if( ob.get_balance() > ob.amount )
        cout<<"The loan can be resolved using the balance from the bank account\n";
}

int main()
{
loan ob[10];
int i;
for(i=0;i<10;i++)
    compare(ob[i]);

return 0;
}
