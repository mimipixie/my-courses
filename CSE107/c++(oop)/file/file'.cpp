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

    char a[100];
    int n[10],j;

    fr>>a;

    j=0;
    while(j<10)
    {
        fr>>n[j];
        j++;
    }

    fr.close();


    cout<<a<<"\n";

     j=0;
     while(j<10)
    {
        cout<<n[j]<<' ';
        j++;
    }



    return 0;
}


