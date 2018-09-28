#include<cstdio>
#include<iostream>
using namespace std;
void in(int *p,int n);
void out(int *p,int n);
void sortnum(int *p,int n);
int sum(int *p,int n);
int main()
{
    int a[100],n,*p,s;
    p=a;
    cout<<"Enter no : ";
    cin>>n;
    in(p,n);
    cout<<"Sorted array\n";
    sortnum(p,n);
    out(p,n);
    s=sum(p,n);
    printf("Sum of num : %d\n",s);
    return 0;
}
void in(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
        cin>>*(p+i);
    return;
}
void out(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d  ",*(p+i));
    printf("\n");
    return;
}
void sortnum(int *p,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        if(*(p+j) > *(p+j+1))
        {
            t=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=t;
        }
    return;
}
int sum(int *p,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
        s+=*(p+i);
    return s;
}

