#include<iostream>
using namespace std;
void toh(int n,char x,char y,char z);
int main()
{
    int n;
    char x,y,z;
    cin>>n>>x>>y>>z;
    toh(n,x,y,z);
    return 0;
}
void toh(int n,char x,char y,char z)
{
    if(n==1)
    {
    cout<<x<<" --> "<<z<<"\n";
    }
    else
    {
    toh(n-1,x,y,z);
    cout<<x<<" --> "<<y<<"\n";
    toh(n-1,x,y,z);
    return;
    }
}
