#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    fstream f("file1.txt",ios::in);

    int a;
    double b;
    char c;

    f>>a>>b>>c;//taking input(reads data) from file

    //display on monitor

    cout<<"display a integer on monitor  : "<<a<<"\n";
    cout<<"display a double on monitor   : "<<b<<"\n";
    cout<<"display a character on monitor: "<<c<<"\n";

    f.close();

    return 0;
}

