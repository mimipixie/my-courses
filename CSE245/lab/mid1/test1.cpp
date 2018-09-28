#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int A[size],B[size],L[size],R[size];
void mergesort(int A[],int p,int r);
void merge(int A[],int p,int q,int r);
int main()
{
    int n,i,j,k,m,p,q;
    cin>>n>>m;
    for(p=1;p<=n;p++)
        cin>>A[p];
    for(p=1;p<=m;p++)
    {
        cin>>i>>j>>k;
        for(q=i;q<=j;q++)
        {
            B[q]=A[q];
        }
        mergesort(B,i,j);
        cout<<B[k+i-1]<<endl;
    }


    return 0;
}



void mergesort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }
}
void merge(int A[],int p,int q,int r)
{
    int n1,n2,i,j,k;

    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
        L[i]=A[p+i-1];
    L[n1+1]=INT_MAX;
    for(i=1;i<=n2;i++)
        R[i]=A[q+i];
    R[n2+1]=INT_MAX;

    for(k=p,i=1,j=1;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }


}


