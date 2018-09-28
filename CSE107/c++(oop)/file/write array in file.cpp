#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    fstream f("file.txt",ios::out);

    int a[100];
    double b[100];
    char c[100];

    //taking input from keyboard

    int i;

    for(i=0;i<5;i++)
        cin>>a[i];

    for(i=0;i<5;i++)
        cin>>b[i];

    cin>>c;//taking input for string(character array)

    //writing into file

    f<<"writes a integer   : ";
    for(i=0;i<5;i++)
        f<<a[i]<<' ';



    f<<"\nwrites a double    : ";
    for(i=0;i<5;i++)
        f<<b[i]<<' ';

    f<<"\nwrites a character : "<<c<<"\n";

    f.close();

    return 0;
}

