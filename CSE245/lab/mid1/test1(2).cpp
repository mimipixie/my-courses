#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int A[size];
int main()
{
    int n,i,j,k,min,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    while(c)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(A[i]>0)
                c++;
        }
        if(c==0)
            break;
        cout<<c<<endl;

        min=INT_MAX;
        for(i=1;i<=n;i++)
        {
            if(A[i]>0 && A[i]<min)
                min=A[i];
        }
        for(i=1;i<=n;i++)
        {
            A[i]=A[i]-min;
        }
    }

    return 0;
}
