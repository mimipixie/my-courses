#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
#define size 10
void bubblesort(int A[],int n);
void selectionsort(int A[],int n);
void insertionsort(int A[],int n);
int binsearch(int A[],int n,int v);
int seqsearch(int A[],int n,int v);
int main()
{
    int A[size]={5,9,7,6,9,8,6,4,3,2};
    int B[size],i,j,k,v;

    for(i=0;i<size;i++)
        B[i]=A[i];
    bubblesort(B,size);
    printf("bubblesort :");
    for(i=0;i<size;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    for(i=0;i<size;i++)
        B[i]=A[i];
    selectionsort(B,size);
    printf("selectionsort :");
    for(i=0;i<size;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    for(i=0;i<size;i++)
        B[i]=A[i];
    insertionsort(B,size);
    printf("insertionsort :");
    for(i=0;i<size;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    printf("Enter value for search : ");
    cin>>v;
    k=binsearch(B,size,v);
    cout<<k<<endl;

    printf("Enter value for search : ");
    cin>>v;
    k=seqsearch(B,size,v);
    cout<<k<<endl;

    return 0;
}

void bubblesort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
        for(j=n-1;j>i;j--)
        if(A[j]<A[j-1])
        {
            k=A[j];
            A[j]=A[j-1];
            A[j-1]=k;
        }

}
void selectionsort(int A[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        if(A[j]<A[k])
        {
            k=j;
        }
        if(i!=k)
        {
            t=A[i];
            A[i]=A[k];
            A[k]=t;
        }
    }

}
void insertionsort(int A[],int n)
{
    int i,j,k,t;
    for(i=1;i<n;i++)
    {
        k=A[i];
        for(j=i-1;j>=0 && A[j]>k;j--)
        {
            A[j+1]=A[j];
        }
        A[j+1]=k;
    }


}
int binsearch(int A[],int n,int v)
{
    int l,h,m,i,j,k,c;
    l=1;
    h=n;
    c=0;
    while(l<=h)
    {
        m=(l+h)/2;
        if(A[m-1]>v)
            h=m-1;
        else if(A[m-1]<v)
            l=m-1;
        else{
            c=1;
            return m-1;}
    }
    if(c==0)
        return -1;

}
int seqsearch(int A[],int n,int v)
{
    int i,c=0;
    for(i=0;i<n;i++)
        if(A[i]==v)
        {
            c=1;
            return i;
        }
    if(c==0)
        return -1;

}
