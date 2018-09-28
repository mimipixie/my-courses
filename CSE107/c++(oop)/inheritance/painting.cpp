#include<iostream>
#include<cstring>
using namespace std;

class Painting{
    char title[20],artist[20];
    double value;
public:
    Painting()
    {
        strcpy(title,"");
        strcpy(artist,"");
        value=400;
    }
    void in()
    {
        cin>>title>>artist;
    }
    void display()
    {
        cout<<title<<artist<<value;
    }
    double * get_value()
    {
        return &value;
    }
    int check_artist()
    {
        if( strcmp(artist,"Degas") == 0 || strcmp(artist,"Monet") == 0
            || strcmp(artist,"Picasso") == 0 || strcmp(artist,"Rembrandt") == 0 )
            return 0;
        else
            return 1;
    }
};

class FamousPainting:public Painting{
public:
    void set_value()
    {
        double *p;
        p=get_value();
        *p=25000;
    }

};

int main()
{
    FamousPainting p[10];
    int i;

    for(i=0;i<2;i++)
    {
        p[i].in();
        if( p[i].check_artist() == 0)
        {
            p[i].set_value();
        }
    }
    for(i=0;i<2;i++)
    {
        p[i].display();
    }

    return 0;

}


