#include<iostream>
using namespace std;
int main()
{
    int m[10],a[10],b[10],i,j,k,p,q;
    cin>>p>>q;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(i=0,j=0,k=0; i<p || j<q ;k++)
    {
        if(a[i]<b[j])
        {
            m[k]=a[i];
            i++;
        }
        else
        {
            m[k]=b[j];
            j++;
        }
    }
    if(i<j)
    {
        while(k!=p+q-1)
        {
            m[k]=a[i];
            i++;
        }

    }
    else
    {
        while(k!=p+q-1)
        {
            m[k]=b[j];
            j++;
        }

    }
    for(i=0;i<p+q;i++)
        cout<<m[i]<<"\t";


    return 0;
}
