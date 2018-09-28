#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
int A[size+1],B[size+1],N;
int partition(int A[],int p,int r);
void quicksort(int A[],int p,int r);
int main()
{
    int i,j,k,p,q,r,v;

    cin>>N;
    p=1;
    r=N;

    for(i=1;i<=N;i++)
        cin>>A[i];
    quicksort(A,p,r);



    return 0;
}
void quicksort(int A[],int p,int r)
{
    int q,i;
    if(p<r)
    {
        q=partition(A,p,r);
        for(i=1;i<=N;i++)
            cout<<A[i]<<" ";
        cout<<endl;
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }

}
int partition(int A[],int p,int r)
{
    int i,j,x,y;
    x=A[p];
    for(i=p,j=p+1;j<=r;j++)
    {
        if(A[j]<=x)
        {
            i++;
            y=A[i];
            A[i]=A[j];
            A[j]=y;
        }
    }
    y=A[i];
    A[i]=A[p];
    A[p]=y;

    return i;
}
