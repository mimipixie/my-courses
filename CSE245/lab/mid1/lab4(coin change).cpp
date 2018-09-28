#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int s[size],c[size],d[size];
void change(int k,int n);
void m_change(int n);
int main()
{
    int k,n,i;

    cin>>k;
    for(i=1;i<=k;i++)
        cin>>d[i];
    cin>>n;



    change(k,n);
    cout<<"c : ";
    for(i=0;i<=n;i++)
    {
        cout<<c[i]<<" ";
    }cout<<endl;
    cout<<"s : ";
    for(i=0;i<=n;i++)
    {
        cout<<s[i]<<" ";
    }cout<<endl;

    m_change(n);


    return 0;
}

void change(int k,int n)
{
    int min,coin,i,j,p;
    c[0]=0;
    s[0]=0;
    for(i=1;i<=n;i++)
    {
        min=INT_MAX;
        for(j=1;j<=k;j++)
        {
            if(d[j]<=i)
            {
                p=1+c[i-d[j]];
                if(p<min)
                {
                    min=p;
                    coin=d[j];
                }
            }
        }
        c[i]=min;
        s[i]=coin;
    }

}
void m_change(int n)
{
    printf("Min : %d  \n",c[n]);
    while(n)
    {
        cout<<s[n]<<" ";
        n-=s[n];
    }

}




