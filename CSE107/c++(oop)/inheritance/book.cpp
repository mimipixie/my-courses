#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class book{
char ti[20],au[20];
public:
void in()
{
    cin>>ti>>au;
}
void display()
{
    cout<<ti<<au;
}
book(char x[20],char y[20])
{
    strcpy(ti,x);strcpy(au,y);
}
};
class fiction:public book
{
    int grading_level;
    public:
    void in(){
    book::in();
    cin>>grading_level;
    }
    void display(){
    book::display();
    cout<<grading_level;;
    }
    fiction(int l,char x[20],char y[20]):book(x,y)
{
    grading_level=l;
}
};
class non_fiction:public book
{
    int page_number;
    public:
     void in(){
    book::in();
    cin>>page_number;
    }
void display()
{

    book::display();
    cout<<page_number;
}
 non_fiction(int m,char x[20],char y[20]):
book(x,y)
{page_number=m;
}
};

int main()
{
book a1("hi","hello");
a1.display();
    fiction b1(20,"hi","hello");
    non_fiction c1(250,"hi","hello");

    b1.in();
    c1.in();

    b1.display();
    c1.display();
return 0;

}
