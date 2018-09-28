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
    fur ob;

    ifstream fr("Object.txt");

    fr.read((char *)&ob , sizeof(ob));//stores data from file into 'ob'

    fr.close();


    ob.out();


    return 0;
}


