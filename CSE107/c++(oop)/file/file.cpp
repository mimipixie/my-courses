#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    int m[10],i=0;

    cin>>str;

    while(i<10)
    {
        cin>>m[i];
        i++;
    }


    ofstream fw("F.txt");

    fw<<str<<"\n";

     i=0;
     while(i<10)
    {
        fw<<m[i]<<' ';
        i++;
    }

    fw.close();

    ifstream fr("F.txt");

    char a;

    while(fr.get(a))
        cout<<a;

    fr.close();


    return 0;
}

