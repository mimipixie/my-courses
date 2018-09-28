#include<bits/stdc++.h>
using namespace std;
int A[100][100],n,t;
struct vertex{
int d,f,p,ind;
char c;
};
struct vertex G[100];
bool cmp(struct vertex i,struct vertex j)
{
    return i.d<j.d;
}
void dfs_visit(int u)
{
    int v;
    G[u].c='g';
    G[u].d=++t;
    for(v=1;v<=n;v++)
    {
        if(A[u][v]==1 && G[v].c=='w')
        {
            G[v].p=u;
            dfs_visit(v);
        }
    }
    G[u].f=++t;
    G[u].c='b';

}
void dfs(int s)
{
    int i,j,k,u,v;
    for(i=1;i<=n;i++)
    {
        G[i].c='w';
        G[i].p=0;
        G[i].ind=i;
    }
    t=0;
    dfs_visit(s);
    for(u=1;u<=n;u++)
    {
        if(G[u].c=='w')
            dfs_visit(u);
    }

}
/*
0 1 0 0 1 0 0 0
1 0 0 0 0 1 0 0
0 0 0 1 0 1 1 0
0 0 1 0 0 0 1 1
1 0 0 0 0 0 0 0
0 1 1 0 0 0 1 0
0 0 1 1 0 1 0 1
0 0 0 1 0 0 1 0
*/
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
    dfs(s);

    sort(G+1,G+n+1,cmp);
    for(i=1;i<=n;i++)
        printf("%d (%d)(%d)(%d)\n",G[i].ind,G[i].d,G[i].f,G[i].p);


    return 0;
}


