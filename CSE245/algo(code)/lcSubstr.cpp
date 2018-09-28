#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int b[size][size],c[size][size];
char x[size],y[size];
void lcs(int m,int n);
void prnt(int i,int j);
int main()
{
    int i,j,k,m=0,n=0;
    char a[size],b[size];
    cin>>a;
    cin>>b;
    for(i=0;a[i]!='\0';i++)
    {
        m++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        n++;
    }
    for(i=1;i<=m;i++)
    {
          x[i]=a[i-1];
    }
    for(i=1;i<=n;i++)
    {
          y[i]=b[i-1];
    }

    lcs(m,n);
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }


    cout<<c[m][n]<<endl;
    prnt(m,n);

    return 0;
}
void lcs(int m,int n)
{
    int i,j;
    for(i=1;i<=m;i++)
        c[i][0]=0;
    for(i=0;i<=n;i++)
        c[0][i]=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==y[j])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='e';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';
            }
        }
    }
}
void prnt(int i,int j)
{
    if(i==0 || j==0)
        return;
    if(b[i][j]=='e')
    {
        prnt(i-1,j-1);
        cout<<x[i]<<" ";
    }
    else if(b[i][j]=='u')
        prnt(i-1,j);
    else
        prnt(i,j-1);

}



