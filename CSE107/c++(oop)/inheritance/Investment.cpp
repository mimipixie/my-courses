#include<iostream>
#include<cstring>
using namespace std;

class Investment{
    double initial_value,current_value,
            profit,percent_profit;
public:
    Investment(double i,double c)
    {
        initial_value=i; current_value=c;
        profit=current_value-initial_value;
        percent_profit=profit/initial_value;
    }
    void display()
    {
        cout<<initial_value<<current_value
            <<profit<<percent_profit;
    }
};

class House{
    char street_address[20];
    double square_feet;
public:
    House(char a[20],double f)
    {
        strcpy(street_address,a);
        square_feet=f;
    }
    void display()
    {
        cout<<street_address<<square_feet;
    }
};

class HouseThatIsAnInvestment:public Investment,public House{
public:
    HouseThatIsAnInvestment(double i,double c,char a[20]
                ,double f):Investment(i,c),House(a,f)
    {}
    void display()
    {
        Investment::display();
        House::display();
    }
};

int main()
{
    HouseThatIsAnInvestment h(5000.0,6000.0,"goran",512.0);

    h.display();

    return 0;
}


