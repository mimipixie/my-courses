#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int p[]={30,35,15,5,10,20,25},m[size][size],s[size][size];
void ms(int n);
void prnt(int i,int j);
int main()
{
    int n,i,j;
    n=sizeof(p)/4  -1;
    ms(n);
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            cout<<m[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            cout<<s[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    cout<<endl;
    cout<<m[1][n]<<endl;
    cout<<endl;
    prnt(1,n);
    cout<<endl;

    return 0;
}
void ms(int n)
{
    int i,j,k,l,q;
    for(i=1;i<=n;i++)
		m[i][i]=0;
    for(l=2;l<=n;l++)
		for(i=1;i<=n-l+1;i++)
        {
			j=i+l-1;
			m[i][j]=INT_MAX;
			for(k=i;k<=j-1;k++)
            {
 				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j])
                {
					m[i][j]=q;
					s[i][j]=k;
                }
            }
        }


}
void prnt(int i,int j)
{
    if(i==j)
    {
        printf("A%d",i);
    }
    else
    {
        cout<<"(";
        prnt(i,s[i][j]);
        prnt(s[i][j]+1,j);
        cout<<")";
    }

}

