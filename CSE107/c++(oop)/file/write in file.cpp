#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    fstream f("file.txt",ios::out);

    int a;
    double b;
    char c;

    cin>>a>>b>>c;//taking input from keyboard

    //writing into file

    f<<"writes a integer   : "<<a<<"\n";
    f<<"writes a double    : "<<b<<"\n";
    f<<"writes a character : "<<c<<"\n";

    f.close();

    return 0;
}
