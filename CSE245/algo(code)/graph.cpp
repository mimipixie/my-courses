#include<bits/stdc++.h>
using namespace std;
int A[100][100],B[100][100],n,ct=0;
int main()
{
    int i,j,k,s;
    bool b=true;
    cin>>n;
        printf("  COL :  ");
    for(i=1;i<=n;i++)
    {
        if(b)
        {
            printf("%d",i);
            b=!b;
        }
        else
            printf(" %d",i);
    }cout<<endl;
    for(i=1;i<=n;i++)
    {
        printf("ROW %d :  ",i);
        for(j=1;j<=n;j++)
        {
            cin>>A[i][j];
            B[j][i]=A[i][j];
        }cout<<endl;
    }
    b=true;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(B[i][j]!=A[i][j])
                b=false;
            if(A[i][j])
                ct++;
        }
    }
    if(b)
        ct/=2;
    printf("No of edges : %d\n",ct);
    for(i=1;i<=n;i++)
    {
        printf("Vertex %d is connected with ",i);
        b=true;
        for(j=1;j<=n;j++)
        {
            if(A[i][j])
            if(b)
            {
                cout<<"vertex "<<j;
                b=!b;
            }
            else
                cout<<" , "<<j;
        }
        if(b)
            cout<<"no vertex";
        cout<<endl;
    }


    return 0;
}
