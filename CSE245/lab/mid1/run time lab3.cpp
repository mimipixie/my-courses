#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<climits>
#include<ctime>
#include<algorithm>
using namespace std;
#define size 100
short int A[size];
struct cross{
    int low,high,sum;
};
struct cross max(short int A[],int low,int high);
struct cross maxcross(short int A[],int low,int mid,int high);
struct cross brute_force(short int A[],int n);
struct cross kadanes(short int A[],int n);
int main()
{
    int i;
    long start,end,diff;
    double sec;
    struct cross m;

    srand(time(NULL));

    for(i=0;i<size;i++)
    {
        if(rand()%2==0)
            A[i]=rand()%100;
        else
            A[i]= -1 * ( rand()%100 ) ;
    }


    start=clock();
    m=max(A,0,size-1);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    //printf("Max sum using recursion   = %d (from %d to %d)\n",m.sum,m.low,m.high);
    printf("Time using recursion      = %lf \n",sec);

    start=clock();
    m=brute_force(A,size-1);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    //printf("Max sum using brute-force = %d (from %d to %d)\n",m.sum,m.low,m.high);
    printf("Time using brute-force    = %lf \n",sec);

    start=clock();
    m=kadanes(A,size-1);
    end=clock();
    diff=end-start;
    sec= (double)(diff*1.0) /CLOCKS_PER_SEC;
    //printf("Max sum using kadanes     = %d (from %d to %d)\n",m.sum,m.low,m.high);
    printf("Time using kadanes        = %lf \n",sec);

    return 0;
}
struct cross max(short int A[],int low,int high)
{
    int mid;
    struct cross c,l,r;
    if(high==low)
    {
        c.low=low;
        c.high=high;
        c.sum=A[low];
        return c;
    }
    else
    {
        mid=(low+high)/2;
        l=max(A,low,mid);
        r=max(A,mid+1,high);
        c=maxcross(A,low,mid,high);
        if(l.sum>=r.sum && l.sum>=c.sum)
            return l;
        else if(c.sum>=l.sum && c.sum>=r.sum)
            return c;
        else
            return r;
    }
}
struct cross maxcross(short int A[],int low,int mid,int high)
{
    struct cross m,l,r;
    int sum=0,i;
    l.sum=INT_MIN;
    for(i=mid;i>=low;i--)
    {
        sum+=A[i];
        if(sum>l.sum)
        {
            l.sum=sum;
            m.low=i;
        }
    }
    r.sum=INT_MIN;
    sum=0;
    for(i=mid+1;i<=high;i++)
    {
        sum+=A[i];
        if(sum>r.sum)
        {
            r.sum=sum;
            m.high=i;
        }
    }
    m.sum=l.sum+r.sum;
    return m;
}
struct cross brute_force(short int A[],int n)
{
    struct cross m;
    m.sum=INT_MIN;
    int sum,i,j;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=A[j];
            if(m.sum<sum)
            {
                m.sum=sum;
                m.low=i;
                m.high=j;
            }
        }
    }
    return m;

}
struct cross kadanes(short int A[],int n)
{
    struct cross m;
    int sum_end=A[0],i,x,low_temp=0;
    m.sum=A[0];
    for(i=1;i<n;i++)
    {
        x=A[i];
        sum_end+=x;
        if(sum_end<x)
        {
            sum_end=x;
            low_temp=i;
        }
        if(m.sum<sum_end)
        {
            m.sum=sum_end;
            m.low=low_temp;
            m.high=i;
        }
    }
    return m;
}


