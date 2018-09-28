#include<bits/stdc++.h>
using namespace std;
#define sz 100
int A[sz][sz],n,S[sz][sz];
typedef struct vertex{
int ind,d,p,ct=0;

}item;
item G[sz],Q[sz];
void enq(int x)
{
    Q[++ct]=x;}
int deq()
{
    return Q[ct--];
}
bool emp()
{
    return ct==0;
}
void init_single_source(int s)
{
    int v;
    for(v=1;v<=n;v++)
    {
        G[v].ind=v;
        G[v].d=INT_MAX;
        G[v].p=0;
    }
    G[s].d=0;
}
void relax(int u,int v,int w)
{
    if(G[v].d>G[u].d+A[u][v])
    {
        G[v].d=G[u].d+A[u][v];
        G[v].p=u;
    }
}
void dij(int s)
{
    init_single_source(s);
    Q=G;

}
int main()
{
    int i,j,k,s;
    bool b=true;
    cin>>n;
        printf("  COL :  ");
    for(i=1;i<=n;i++)
    {
        if(b)
        {
            printf("%d",i);
            b=!b;
        }
        else
            printf(" %d",i);
    }cout<<endl;
    for(i=1;i<=n;i++)
    {
        printf("ROW %d :  ",i);
        for(j=1;j<=n;j++)
        {
            cin>>A[i][j];
        }cout<<endl;
    }
    cin>>s;
    cout<<endl;
    dij(s);
    for(i=1;i<=n;i++)
        printf("%d (%d)(%d)(%d)\n",G[i].ind,G[i].d,G[i].f,G[i].p);



    return 0;
}
