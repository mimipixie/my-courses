#include<bits/stdc++.h>
using namespace std;

int n,i;

//two dimensional array
int A[100][100]

//define & declare structure
struct vertex{
int d,p,ind;
char c;
};
struct vertex G[100];

// Use queue
int Q[100],ct=0;//ct = number of elements initially zero
void enq(int x)
{
    Q[++ct]=x;//Elements in Q starts from index 1 in this case
}
int deq()
{
    return Q[ct--];
}
bool emp()
{
    return ct==0;
}

// built-in sort
// n = # of elements
// i , j are two consecutive elements in array
bool cmp(struct vertex i,struct vertex j)
{
    return i.d<j.d;// Ascending order
}
bool cmp1(struct vertex i,struct vertex j)
{
    return i.p<j.p;
}
bool cmp(struct vertex i,struct vertex j)
{
    return i.d>j.d;// Descending order
}
/*
   if we have two conditions for sorting like
       if(i.d==j.d) then cmp1
    then we use sort(G+1,G+n+1,cmp1) first and
                sort(G+1,G+n+1,cmp) second
    OOR use :-
bool cmp(struct vertex i,struct vertex j)
{
    if(i.d==j.d)
        return cmp1(i,j);//define cmp1 before cmp or else error
    return i.d<j.d;
}
*/
sort(G+1,G+n+1,cmp);// index from 1 to n
sort(G,G+n,cmp);// index from 0 to n-1


int main()
{
    bool b;
    //they are equivalent statements
    //all of them works if true
    //ends if false
    while(true)
    while(n)
    while(n!=0)
    while(b==true)
    while(b!=false)

    //they are equivalent statements
    //all of them works if false
    //ends if true
    while(false)
    while(!n)
    while(n==0)
    while(b==false)
    while(b!=true)

    // for printing a Sequence
    b=true;
    for(i=1;i<=n;i++)
    {
        if(b)
        {
            printf("%d",i);
            b=!b;
        }
        else
            printf(" , %d",i);
    }cout<<endl;

    // Symmetric matrix
    // For all B[j][i]=A[i][j]
    int B[100][100];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            B[j][i]=A[i][j];
    b=true;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(B[i][j]!=A[i][j])
                b=false; // Not Symmetric


    return 0;
}


