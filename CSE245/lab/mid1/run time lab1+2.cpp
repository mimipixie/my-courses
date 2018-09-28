#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 600000
short int L[size+1],R[size+1],A[size+1],B[size+1];
void bubblesort(short int A[],int n);
void selectionsort(short int A[],int n);
void insertionsort(short int A[],int n);
int binsearch(short int A[],int n,int v);
int seqsearch(short int A[],int n,int v);
void merge(short int A[],int p,int q,int r);
void mergesort(short int A[],int p,int r);
int partition(short int A[],int p,int r);
void quicksort(short int A[],int p,int r);
bool comp(int i,int j);
int main()
{
    int i,j,k,p,q,r,v;
    long start,end,diff;
    double sec;

    p=1;
    r=size;

    srand(time(NULL));
    for(i=1;i<=size;i++)
        A[i]=rand()%100;

    /*for(i=1;i<=size;i++)
        B[i]=A[i];
    start=clock();
    bubblesort(B,size);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("bubble ");
    printf("sort time : ");
    cout<<sec<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    start=clock();
    selectionsort(B,size);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("selection ");
    printf("sort time : ");
    cout<<sec<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    start=clock();
    insertionsort(B,size);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("insertion ");
    printf("sort time : ");
    cout<<sec<<endl;*/

    for(i=1;i<=size;i++)
        B[i]=A[i];
    start=clock();
    quicksort(B,p,r);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("quick sort time : ");
    cout<<sec<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    start=clock();
    mergesort(B,p,r);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("merge sort time : ");
    cout<<sec<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    start=clock();
    sort(B+p,B+r,comp);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    printf("built-in sort time : ");
    cout<<sec<<endl;

    return 0;
}

void mergesort(short int A[],int p,int r)
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
void merge(short int A[],int p,int q,int r)
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
void quicksort(short int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }

}
int partition(short int A[],int p,int r)
{
    int i,j,x,y;
    x=A[r];
    for(i=p-1,j=p;j<=r-1;j++)
    {
        if(A[j]<=x)
        {
            i++;
            y=A[i];
            A[i]=A[j];
            A[j]=y;
        }
    }
    y=A[i+1];
    A[i+1]=A[r];
    A[r]=y;

    return i+1;
}
bool comp(int i,int j)
{
    if(i<j)
        return true;
    else
        return false;
}
void bubblesort(short int A[],int n)
{
    int i,j,k;
    for(i=1;i<=n-1;i++)
        for(j=n;j>i;j--)
        if(A[j]<A[j-1])
        {
            k=A[j];
            A[j]=A[j-1];
            A[j-1]=k;
        }

}
void selectionsort(short int A[],int n)
{
    int i,j,k,t;
    for(i=1;i<=n-1;i++)
    {
        k=i;
        for(j=i+1;j<=n;j++)
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
void insertionsort(short int A[],int n)
{
    int i,j,k,t;
    for(i=2;i<=n;i++)
    {
        k=A[i];
        for(j=i-1;j>0 && A[j]>k ;j--)
        {
            A[j+1]=A[j];
        }
        A[j+1]=k;
    }


}
int binsearch(short int A[],int n,int v)
{
    int l,h,m,i,j,k;
    l=1;
    h=n;
    while(l<=h)
    {
        m=(l+h)/2;
        if(A[m]>v)
            h=m-1;
        else if(A[m]<v)
            l=m+1;
        else
            return m;
    }
    return -1;
}
int seqsearch(short int A[],int n,int v)
{
    int i;
    for(i=1;i<=n;i++)
        if(A[i]==v)
            return i;

    return -1;
}


