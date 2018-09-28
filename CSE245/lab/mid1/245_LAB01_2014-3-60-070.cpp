#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
#define size 10
void bubblesort(int A[],int n);
void selectionsort(int A[],int n);
void insertionsort(int A[],int n);
int binsearch(int A[],int n,int v);
int seqsearch(int A[],int n,int v);
int main()
{
    int A[size+1],B[size+1],i,j,k,v;

    srand(time(NULL));
    for(i=1;i<=size;i++)
        A[i]=rand()%10;

    printf("array elements : ");
    for(i=1;i<=size;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    bubblesort(B,size);
    printf("bubblesort :");
    for(i=1;i<=size;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    selectionsort(B,size);
    printf("selectionsort :");
    for(i=1;i<=size;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    for(i=1;i<=size;i++)
        B[i]=A[i];
    insertionsort(B,size);
    printf("insertionsort :");
    for(i=1;i<=size;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    printf("Enter value for search : ");
    cin>>v;
    k=binsearch(B,size,v);
    cout<<"position using bin search = "<<k<<endl;
    k=seqsearch(B,size,v);
    cout<<"position using seq search = "<<k<<endl;

    return 0;
}

void bubblesort(int A[],int n)
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
void selectionsort(int A[],int n)
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
void insertionsort(int A[],int n)
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
int binsearch(int A[],int n,int v)
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
int seqsearch(int A[],int n,int v)
{
    int i;
    for(i=1;i<=n;i++)
        if(A[i]==v)
            return i;

    return -1;
}
