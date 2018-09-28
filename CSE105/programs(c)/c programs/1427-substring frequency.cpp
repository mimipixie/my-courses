#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<stdio.h>
using namespace std;
int main()
{
    long long int C,n,i,j,k,m,l,r[500],x;
    string T,P;
    cin>>C;
    for(m=0;m<C;m++)
    {
        cin>>n;
        cin>>T;
        for(l=0;l<n;l++)
        {
            cin>>P;
            r[l]=0;
            for(i=0;i<=( T.size()- P.size() ) ;i++)
            {
                x=1;
                for(j=i,k=0;j< i+P.size() ;j++,k++)
                {
                    if(T[j]==P[k])
                        continue;
                    else
                    {
                        x=0;
                        break;
                    }
                }
                r[l]+=x;
            }
        }
        cout<<"Case "<<m+1<<":"<<endl;
        for(l=0;l<n;l++)
        {
            cout<<r[l]<<endl;
        }
    }


    return 0;
}

