#include<bits/stdc++.h>
using namespace std;
#define size 100
int w[size][size],n,ct;
struct vertex{
int ind,d,p;
};
struct vertex G[size],Q[size];
int ab[size],ba[size];
bool cmp(struct vertex i,struct vertex j)
{
    return i.d>j.d;
}
int extract_min()
{
    int u;
    sort(Q+1,Q+1+ct,cmp);
    //min=Q[ct].d;
    u=Q[ct].ind;
    ct--;
    return u;
}
bool nemp()
{
    return ct;
}
void init(int s)
{
    int v;
    for(v=1;v<=n;v++)
    {
        G[v].ind=v;
        G[v].p=0;
        G[v].d=INT_MAX;
        Q[v].d=INT_MAX;
    }
    G[s].d=0;
    Q[s].d=0;
    ct=n;
}
void relax(int u,int v)
{
    if(G[v].d > G[u].d + w[u][v])
    {
        G[v].d = G[u].d + w[u][v];
        G[v].p = u;
        for(int i=1;i<=ct;i++)
        {
            if(Q[i].ind==v)
            {
                Q[i].d=G[v].d;
            }
        }
    }
}
void dij(int s)
{
    int v,u;
    init(s);
    while(nemp())
    {
        u=extract_min();

        for(v=1;v<=n;v++)
        {
            if(v!=u && w[u][v]!=-1)
            {
                relax(u,v);
            }
        }
    }


}
int main()
{
    int i,j,k,s;
    cin>>n;
    cin>>s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>w[i][j];
        }
    }
    dij(s);
    for(i=1;i<=n;i++)
    {
        if(i!=s)
        {
            printf("From %d to %d : %d\n",s,i,G[i].d);
        }

    }


    return 0;
}

/*
5
1
 0  10  -1  -1   5
-1   0   1  -1   2
-1  -1   0   4  -1
 7  -1   6   0  -1
-1   3   9   2   0

*/




