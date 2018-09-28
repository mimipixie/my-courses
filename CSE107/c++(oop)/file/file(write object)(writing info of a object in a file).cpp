#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class fur{
    char rm[20],mc[20];
public:
    fur()
    {
        strcpy(rm,"wood");
        strcpy(mc,"otobi");

    }
};

int main()
{
    fur ob;


    ofstream fw("F.txt"); //file open

    fw.write((char *)&ob , sizeof(ob)); //file write

    fw.close(); //file close


    return 0;
}
