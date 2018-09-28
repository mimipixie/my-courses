#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include<vector>
using namespace std;

class emp{
    char name[20],deg[20],jdate[20];
    double sal;
public:
    void in()
    {
        cin>>name>>deg>>jdate>>sal;
    }
    void out()
    {
        cout<<name<<"\t"<<deg<<"\t"<<jdate<<"\t"<<sal<<"\n";
    }
    int check(char n[20])
    {
        if(strcmp(name,n)==0)
            return 0;
        else
            return 1;
    }
};

int main()
{
    vector<emp> e;
    emp temp;
    int i,c=0;
    char a,n[20];
    do{
        temp.in();
        e.push_back(temp);
    }while(cin>>a && a!='x');

    ofstream fw("emp.txt");
    for(i=0;i<e.size();i++)
    fw.write((char *)&e[i],sizeof(e[i]));

    fw.close();

    cout<<"Enter emp name : ";
    cin>>n;

    ifstream fr("emp.txt");
    i=0;
    while(i<e.size())
    {
        fr.read((char *)&e[i],sizeof(e[i]));
        if(e[i].check(n)==0)
        {
            e[i].out();
            c=1;
            break;
        }
        i++;
    }
    if(c==0)
        cout<<"emp does not exist\n";

    return 0;
}
