#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
struct mat{
int row,col;

};
struct mat stk[100];
char c[100];
int p[]={30,35,15,5,10,20,25},ct=0,sum=0;
void push(struct mat m);
struct mat pop();
void st();
int main()
{
    int n,i,j;
    cin>>c;

//((1(23))((45)6))

    st();

    cout<<sum;

    return 0;
}
void push(struct mat m)
{
    ct++;
    stk[ct]=m;

}
struct mat pop()
{
    struct mat m;
    m=stk[ct];
    ct--;
    return m;
}
void st()
{
    int i,j,k,v,ss;
    struct mat m,n,x;
    for(i=0;c[i]!='\0';i++)
    {
        v=c[i]-48;
        if(v>=1 && v<=6)
        {
            m.row=p[v-1];
            m.col=p[v];
            push(m);
        }
        else if(c[i]==')')
        {
            n=pop();
            m=pop();
            ss=m.row*m.col*n.col;
            sum+=ss;
            x.row=m.row;
            x.col=n.col;
            push(x);
        }

    }

}






