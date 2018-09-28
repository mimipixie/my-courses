#include<iostream>
#include<cstdio>
#include<cstdlib>
#define S 100
using namespace std;
void swap(int x,int y);
void reheapup(int pos);
void reheapdown(int pos,int last);
int A[S];
int main()
{
    int n,num,count=0,i,j,k,c,p,sz;
    cin>>n;
for(i=1;i<=n;i++)
{
    cout<<"Enter option : "<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
                cout<<"Enter child : "<<endl;
                cin>>sz;
                for(i=1;i<=count;i++)
                {
                    if(A[i]==sz)
                    {
                        p=i;
                        break;
                    }
                }
                if(p==1)
                    cout<<"It is root element"<<endl;
                else
                    printf("Parent = %d\n",A[p/2]);
                break;
        case 2:
                cout<<"Enter parent : "<<endl;
                cin>>sz;
                for(i=1;i<=count;i++)
                {
                    if(A[i]==sz)
                    {
                        p=i;
                        break;
                    }
                }
                if((2*p)>count)
                    cout<<"Left child = NULL"<<endl;
                else
                    printf("Left child = %d\n",A[2*p]);
                if( ( (2*p) +1) >count)
                    cout<<"Right child = NULL"<<endl;
                else
                    printf("Right child = %d\n",A[2*p +1]);
                break;
        case 3:
                cout<<"Number of element : "<<endl;
                cin>>num;
                sz=count;
                cout<<"Enter elements : "<<endl;
                for(i=sz+1;i<=sz+num;i++)
                {
                    count++;
                    cin>>A[i];
                }
                for(i=1;i<=count;i++)
                {
                    reheapup(i);
                }
                for(i=1;i<=count;i++)
                {
                    reheapdown(i,count);
                }
                break;
        case 4:
                cout<<"Elements in heap: "<<endl;
                for(i=1;i<=count;i++)
                {
                    cout<<A[i]<<" ";
                }cout<<endl;
                break;
        case 0: exit(0);
    }
}
    return 0;
}

void swap(int x,int y)
{
    int temp;
    temp= A[x];
    A[x]= A[y];
    A[y]= temp;
    return;
}
void reheapup(int pos)
{
    int parent;
    if(pos!=1)
    {
        parent=pos/2;
        if(A[pos]>A[parent])
        {
            swap(pos,parent);
            reheapup(parent);
        }
    }
    return;
}
void reheapdown(int pos,int last)
{
    int l,r,c;
    l=2*pos;
    r=2*pos+1;
    if(l<=last && r<=last)
    {
        if(A[l]>A[r] || l==last)
            c=l;
        else
            c=r;
        if(A[c]>A[pos])
        {
            swap(pos,c);
            reheapdown(c,last);
        }
    }
    return;
}
