#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class musica_compostion
{private:
    char title,composer;
    int year;
    public:

    void in()
    {
        cin>>title>>composer;
    }
    void display()
    {
         cout<<title<<composer;
    }
      musica_compostion(char x,char y,int z)
    {
        title= x,composer=y,year=z;
    }
};
class nationalAnthem :public musica_compostion
{
    char name;
    public://tmi ekhane "public" declare krte vule gecho
    void in()
    {
        //void in=musica_compostion::in)()// ei line e vul, " void in= " dite hoy na
        musica_compostion::in();
        cin>>name;

    }
    void display()
    {
        musica_compostion::display();/* base class er ei func ta ekhane call krte
                                        bolece ques e*/
        cout<<name;
    }

    /*nationalAnthem(char m) ekhane ei constructor akta parameter ney,, bt
                            prblm hocche eta "musica_compostion" class ke inherit
                            kore .. tai " musica_compostion(char x,char y,int z) " ei
                            constructor tao "nationalAnthem" class e inherit hoyece..
                            kintu " musica_compostion(char x,char y,int z) " eta to 3ta
                            parameter ney,, thats why "nationalAnthem(char m)" ei constrctor e
                            amra 1 tar jaygay 1+3=4 ta parameter nibo,, ""base class constructor""
                            rule onujayi......*/
    nationalAnthem(char m,char x,char y,int z):musica_compostion(x,y,z)
    {
        name=m;
    }/* base class er constructor ta ekhane call krte hoy..eta parameterised constrctr bole
        ""base class constructor"" rule ejete hoy,, default constructor hole
        ei jhamela krte hoy na*/
};
int main()
{
     nationalAnthem a('m','a','b',10);/*default constrctr nei ei class e,
                                        parameterised constrctr ace bole
                                        evabe object declare krte hoy....
                                        ekhan thekeo 4 ta parameter pathate
                                        hoy.. base cls constrctr er jonno last
                                        3 ta,, ar 1st er 1 ta derived cls er*/
     //musica_compostion b;

a.in();
//b.in();
a.display();

return 0;
}

