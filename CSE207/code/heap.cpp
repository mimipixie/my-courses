#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
void swap(int *x,int*y)
{
    int temp;
    temp= *x;
    *x= *y;
    *y= temp;
}
int main()
{
    int a[100],n,i,j,k,c,s,p,*q;
    cout<<"Number of element : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
        //heap up (large to small)
    for(i=1;i<n;i++)
    {
        if(a[(i+1)/2]>a[i-1])
        {
            q=&a[0];
            swap(q+i,q+i-1);
        }
    }
    for(;;)
{
    cout<<"Enter option : "<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
                cout<<"Enter child : "<<endl;
                cin>>s;
                for(i=0;i<n;i++)
                {
                    if(a[i]==s)
                    {
                        p=i+1;
                        break;
                    }
                }
                if(p==1)
                    cout<<"It is root element"<<endl;
                else
                    printf("Parent = %d\n",a[(p/2)-1]);
                break;
        case 2:
                cout<<"Enter parent : "<<endl;
                cin>>s;
                for(i=0;i<n;i++)
                {
                    if(a[i]==s)
                    {
                        p=i+1;
                        break;
                    }
                }
                if(p==n)
                {
                    cout<<"Left child = NULL"<<endl;
                    cout<<"Right child = NULL"<<endl;
                }
                else
                {
                    printf("Left child = %d\n",a[(2*p)-1]);
                    printf("Right child = %d\n",a[((2*p)+1)-1]);
                }
                break;
        case 0: exit(0);
    }
}
    return 0;
}

