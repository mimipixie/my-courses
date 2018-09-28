#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ob("A.txt");
    ofstream ob2("B.txt");

    char a;

    while(ob>>a)
        ob2<<a;

    ob.close();
    ob2.close();


    return 0;
}

