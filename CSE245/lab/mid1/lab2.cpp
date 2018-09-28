#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
#define size 100
void insertionsort(int A[],int n);
int main()
{
    int A[size],i,j,k,N;

    cin>>N;
    for(i=0;i<N;i++)
        cin>>A[i];
    cout<<endl;
    insertionsort(A,N);


    return 0;
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
        for(k=0;k<n;k++)
            cout<<A[k]<<" ";
        cout<<endl;
    }


}
