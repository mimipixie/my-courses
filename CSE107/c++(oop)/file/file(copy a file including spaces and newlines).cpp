#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ob("A.txt");
    ofstream ob2("C.txt");

    char a;

    while(ob.get(a))
        ob2<<a;

    ob.close();
    ob2.close();


    return 0;
}

