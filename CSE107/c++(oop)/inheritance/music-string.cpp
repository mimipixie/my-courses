#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class musica_compostion
{private:
char title[20],composer[52];
int year;
public:

void in()
{
cin>>title>>composer>>year;
}
void display()
{
cout<<title<<"\t"<<composer<<"\t"<<year;
}
musica_compostion(char x[20],char y[20],int z)
{
strcpy(title, x);strcpy(composer,y);year=z;
}
};
class nationalAnthem :public musica_compostion
{
char name[20];
public:
void in()
{
musica_compostion::in();
cin>>name;

}
void display()
{
musica_compostion::display();
cout<<"\t"<<name;
}


nationalAnthem(char m[20],char x[20],char y[20],int z):musica_compostion(x,y,z)
{
strcpy(name,m);// "name=m" ei kaj ta korbe "strcpy()" func ta
}
};
int main()
{
nationalAnthem a("hello","hi","bye",2015);

a.display();// constructor e deya value gulo monitor e dekhabe

a.in();

a.display();// keyboard theke neya input gulo show korbe

return 0;
}
