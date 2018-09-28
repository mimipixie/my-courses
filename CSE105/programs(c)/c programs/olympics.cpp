#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<fstream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    long long int T,i,j;
    double a,b,l,w,r,ang,x,y,s;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>a>>b;
        ang=acos( (a*a-b*b)/(a*a+b*b));
        y=a+( sqrt(a*a+b*b) *ang )/2;
        x=200/y;
        r=x* sqrt(a*a+b*b) /2;
        s=r*ang;
        l=a*x;
        w=b*x;
        cout<<"Case "<<i+1<<": "<<l<<" "<<w<<endl;
    }


    return 0;
}


