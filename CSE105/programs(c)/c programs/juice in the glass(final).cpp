#include<cmath>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    long long int T,r1,r2,h,p,k;
    double v,R;
    cin>>T;
    for(k=0;k<T;k++)
    {
        cin>>r1>>r2>>h>>p;
        R=(double)r2+((double)(r1-r2))*((double)p/(double)h);
        v= (pi/3) * (double)p *( R*R + R*(double)r2 + (double)(r2*r2) );
        cout<<"Case "<<k+1<<": "<<setprecision(9)<<fixed<<v<<endl;
    }

    return 0;

}

