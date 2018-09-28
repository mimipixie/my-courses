#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    fstream f("file2.txt",ios::in);

    int a[100];
    double b[100];
    char c[100];

    //read in from file
    int i;

    for(i=0;i<5;i++)
        f>>a[i];

    for(i=0;i<5;i++)
        f>>b[i];

    f>>c;// reads string(character array) from file


    //display arrays on monitor

    cout<<"display an integer array on monitor          :\n";
    for(i=0;i<5;i++)
        cout<<a[i]<<' ';

    cout<<"\n\ndisplay a double type array on monitor       :\n";
    for(i=0;i<5;i++)
        cout<<b[i];

    cout<<"\n\ndisplay a string(character array) on monitor :\n";
    cout<<c;

    f.close();

    return 0;
}


