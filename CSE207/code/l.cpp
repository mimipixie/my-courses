#include<iostream>
using namespace std;
int main()
{
    int m[10],a[10],b[10],i,j,k,p,q,s;
    cin>>p>>q;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<p-1;i++)
    {
        for(j=0;j<p-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                s=a[j];
                a[j]=a[j+1];
                a[j+1]=s;
            }
        }
    }
    for(i=0;i<q-1;i++)
    {
        for(j=0;j<q-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                s=b[j];
                b[j]=b[j+1];
                b[j+1]=s;
            }
        }
    }
    for(i=0,j=0,k=0; i<p && j<q ;k++)
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
    if(p==q)
    {
        if(i<j)
        {
            m[k]=a[i];
        }
        else
        {
            m[k]=b[j];
        }
    }
    else if(i==p)
    {
        for(;k!=p+q;k++,j++)
        {
            m[k]=b[j];
        }
    }
    else if(j==q)
    {
        for(;k!=p+q;k++,i++)
        {
            m[k]=a[i];
        }
    }
    for(i=0;i<p+q;i++)
        cout<<m[i]<<"\t";


    return 0;
}
