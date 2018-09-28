#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class fur{
    char rm[20],mc[20];
public:
    fur()
    {
        strcpy(rm,"");
        strcpy(mc,"");
    }
    void in()
    {
        cin>>rm>>mc;
    }
    void out()
    {
        cout<<rm<<"\t"<<mc<<"\n";
    }
};

int main()
{
    fur ob,ob1;

    ob.in();


    ofstream fw("F.txt");

    fw.write((char *)&ob , sizeof(ob));

    fw.close();


    ifstream fr("F.txt");

    fr.read((char *)&ob1 , sizeof(ob1));

    fr.close();


    ob1.out();


    return 0;
}

