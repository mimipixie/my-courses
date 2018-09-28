#include<bits/stdc++.h>
using namespace std;
int A[100][100],n,t;
bool b;
struct vertex{
int d,f,p,ind,low,ch;
char c;
};
struct vertex G[100];
bool cmp(struct vertex i,struct vertex j)
{
    return i.d<j.d;
}
int min(int x,int y)
{
    if(x<y)
        return x;
    return y;
}
void dfs_visit_brdg(int u)
{
    int v;
    G[u].c='g';
    G[u].d=++t;
    G[u].ch=0;
    G[u].low=G[u].d;
    for(v=1;v<=n;v++)
    {
        if(A[u][v]==1){

        if(G[v].c=='w')
        {
            G[v].p=u;
            G[u].ch++;
            dfs_visit_brdg(v);
            G[u].low=min(G[u].low,G[v].low);
            if( G[v].low > G[u].d )
            {
                if(b)
                {
                    cout<<"("<<u<<","<<v<<")";
                    b=false;
                }
                else
                    cout<<" , "<<"("<<u<<","<<v<<")";
            }
        }
        else if(  G[v].c=='g' && G[u].p!=v && G[v].d<G[u].d)
            G[u].low=min(G[u].low,G[v].d);
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
    b=true;
    cout<<"Bridges are ";
    dfs_visit_brdg(s);
    for(u=1;u<=n;u++)
    {
        if(G[u].c=='w')
            dfs_visit_brdg(u);
    }
    if(b)
        cout<<"none";
    cout<<endl;

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
/*
0 1 1
1 0 0
1 0 0
*/
/*
0 1 1 0 0 0
1 0 1 0 1 0
1 1 0 0 0 0
0 0 0 0 1 1
0 1 0 1 0 1
0 0 0 1 1 0
*/
int main()
{
    int i,j,k,s;
    b=true;
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
    cout<<endl;
    sort(G+1,G+n+1,cmp);
    for(i=1;i<=n;i++)
        printf("%d {%d}(%d)(%d){%d}\n",G[i].ind,G[i].d,G[i].f,G[i].p,G[i].low);


    return 0;
}


