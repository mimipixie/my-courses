#include<bits/stdc++.h>
using namespace std;
int A[100][100],n,ct=0,Q[100];
struct vertex{
int d,p,ind;
char c;
};
struct vertex G[100];
void enq(int x)
{
    Q[++ct]=x;
}
int deq()
{
    return Q[ct--];
}
bool emp()
{
    return ct==0;
}
bool cmp1(struct vertex i,struct vertex j)
{
    return i.p<j.p;
}
bool cmp(struct vertex i,struct vertex j)
{
    if(i.d==j.d)
        return cmp1(i,j);
    return i.d<j.d;
}
void bfs(int s)
{
    int i,j,k,u,v;
    for(i=1;i<=n;i++)
    {
        G[i].c='w';
        G[i].d=0;
        G[i].p=0;
        G[i].ind=i;
    }
        G[s].c='g';
        G[s].d=0;
        G[s].p=0;
    enq(s);
    while(!emp())
    {
        u=deq();
        for(v=1;v<=n;v++)
        {
            if(A[u][v]==1 && G[v].c=='w')
            {
                enq(v);
                G[v].c='g';
                G[v].d=G[u].d+1;
                G[v].p=u;
            }
        }
        G[u].c='b';
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
    bfs(s);

    sort(G+1,G+n+1,cmp);
    for(i=1;i<=n;i++)
        printf("%d (%d)(%d)\n",G[i].ind,G[i].d,G[i].p);


    return 0;
}


