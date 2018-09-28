#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
#define size 500000
void bubblesort(int A[],int n);
void selectionsort(int A[],int n);
void insertionsort(int A[],int n);
int binsearch(int A[],int n,int v);
int seqsearch(int A[],int n,int v);
int main()
{
    int A[size],B[size],i,j,k,v;
    long start,end,diff;
    double sec;

    srand(time(NULL));
    for(i=0;i<size;i++)
        B[i]=rand()%100;

    start=clock();
    bubblesort(B,size);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("sort time :");
    cout<<sec<<endl;

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
    int l,h,m,i,j,k;
    l=1;
    h=n;
    while(l<=h)
    {
        m=(l+h)/2;
        if(A[m-1]>v)
            h=m-1;
        else if(A[m-1]<v)
            l=m+1;
        else
            return m;
    }
    return -1;
}
int seqsearch(int A[],int n,int v)
{
    int i;
    for(i=0;i<n;i++)
        if(A[i]==v)
            return i+1;

    return -1;
}
