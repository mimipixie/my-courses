#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class rm
{
    char name[20];
    int price;
    public:
    rm(char x[20],int y)
    {
        strcpy(name,x);price=y;
    }
    void in()
    {
        cin>>name>>price;
    }
    void out()
    {
        cout<<name<<price;
    }
};
class hs
{
    char nos[20];
    int fee,num;
    public:
    hs(char p[20],int q,int r)
    {
        strcpy(nos,p);fee=q;num=r;
    }
    void in()
    {
        cin>>nos>>fee>>num;
    }
    void out()
    {
        cout<<nos<<fee<<num;
    }
};
class rsm:public rm,public hs{
    public:
        rsm(char x[20],int y,char p[20],int q,int r):rm(x,y),hs(p,q,r){}/* ekhane tmi 'coma' er jaygay
                                                                            'colon' diyecila....
                                                                            "rm(x,y),hs(p,q,r)" base class
                                                                            er constructor gulor majhe 'coma'
                                                                            hobe*/
        void in()
        {
            rm::in();
            hs::in();
        }
        void out()
        {
            rm::out();
            hs::out();
        }

};
int main()
{
    rm a("dinr",80);
    hs b("room",50,420);
    rsm c("dinr",80,"room service",4,850);
    a.in();
    b.in();
    c.in();
    a.out();
    b.out();
    c.out();
    return 0;
}
