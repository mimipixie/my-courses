#include<iostream>
#include<cstring>
using namespace std;

class RestaurantMeal{
    char name[20];
    double price;
public:
    RestaurantMeal(char * n,double p)// parameter jodi string hoy, then pointer(*) dite hoy
    {
        strcpy(name,n);// "name=n" ei kaj ta korbe "strcpy()" func ta
        price=p;
    }
    void display()
    {
        cout<<name<<price;
    }
    double get_price()
    {
        return price;
    }
};

class HotelService{
    char Service_name[20];
    double Service_fee;
    int room_no;
public:
    HotelService(int r)
    {
        strcpy(Service_name,"room service");
        Service_fee=4.00;
        room_no=r;
    }
    void display()
    {
        cout<<Service_name<<Service_fee<<room_no;
    }
    double get_service_fee()
    {
        return Service_fee;
    }
};

class RoomServiceMeal:public RestaurantMeal,public HotelService
{
public:
    RoomServiceMeal(char * n,double p,int r):RestaurantMeal(n,p),HotelService(r)
    {
        /*ei constructor er kaj sudhu base class 2 tar parameterized
          constructor er jonno main() theke parameter neya + constructor
          2 ta call kora*/
    }
    void display()
    {
        RestaurantMeal::display();
        HotelService::display();
        print_bill();
    }
    void print_bill()
    {
        double bill,price,Service_fee;
        price= get_price();
        Service_fee = get_service_fee();
        bill = price+Service_fee;
        cout<<"\ntotal bill: $"<<bill;
    }
};

int main()
{
    RoomServiceMeal m("steak dinner",19.99,1202);
    m.display();

    return 0;
}

