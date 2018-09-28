#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;

class exam{
    char c_num[20];
    int rm_num,duration;
public:
    void in()
    {
        cin>>c_num>>rm_num>>duration;
    }
    void out()
    {
        cout<<c_num<<"\t"<<rm_num<<"\t"<<duration<<"\n";
    }
    int check(char *c)
    {
        cout<<"checking.....\n";
        if( strcmp(c_num,c)==0 )
            return 0;
        else
            return 1;
    }
    exam operator+(exam x)
    {
        exam z;

        strcpy(z.c_num,c_num);
        z.rm_num=rm_num;
        z.duration=(duration+x.duration)/2;

        return z;
    }
};

int main()
{
exam ob[10];
int i;
ofstream f("Examination.txt");
for(i=0;i<10;i++)
{
    ob[i].in();
    f.write((char *)&ob[i],sizeof(ob[i]));
}

char course[20];
int s=0;
cin>>course;
exam temp;
ifstream f1("Examination.txt");
for(;;)
{
    f1.read((char *)&temp,sizeof(temp));
    if( temp.check(course) == 0 )
    {
        temp.out();
        s=1;
        break;
    }
}
if( s==0 )
    cout<<"There is no examination for that course\n";

return 0;
}
