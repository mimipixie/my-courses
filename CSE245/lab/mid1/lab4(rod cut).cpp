#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int r[size],s[size],p[size];
void cutrod(int n);
void prnt_cutrod(int n);
int main()
{
    int T,n,i;

    cin>>T;
    for(i=1;i<=T;i++)
        cin>>p[i];
    cin>>n;


/*
10
1 5 8 9 10 17 17 20 24 30
8
*/
    cutrod(T);
    cout<<"r : ";
    for(i=0;i<=T;i++)
    {
        cout<<r[i]<<" ";
    }cout<<endl;
    cout<<"s : ";
    for(i=0;i<=T;i++)
    {
        cout<<s[i]<<" ";
    }cout<<endl;

    prnt_cutrod(n);


    return 0;
}

void cutrod(int n)
{
    int i,j,max,q;
    r[0]=0;
    s[0]=0;
    for(j=1;j<=n;j++)
    {
        max=INT_MIN;
        for(i=1;i<=j;i++)
        {
            q=p[i]+r[j-i];
            if(max < q)
            {
                max=q;
                s[j]=i;
            }
        }
        r[j]=max;
    }
}
void prnt_cutrod(int n)
{
    printf("Max = %d\n",r[n]);
    while(n>0)
    {
        printf("%d ",s[n]);
        n-=s[n];
    }
}







