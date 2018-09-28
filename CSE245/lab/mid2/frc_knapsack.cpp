#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;
#define size 100
struct ks{
double  v,wt,vw;
int ct;
};
struct ks X[size];
bool comp(struct ks &i,struct ks &j);
 int main()
 {
     int i,j,k,t,n;
     double temp,w,sum=0.0,y;
     cin>>n>>w;
     for(i=1;i<=n;i++)
     {
         cin>>X[i].v>>X[i].wt;
         X[i].vw=X[i].v / X[i].wt;
         X[i].ct=i;
     }
     sort(X+1,X+n+1,comp);
     /*for(i=1;i<=n-1;i++)
     {
         for(j=n;j>=i+1;j--)
         {
             if(x[j].vw > x[j-1].vw)
             {
                temp=x[j].vw;
                x[j].vw=x[j-1].vw;
                x[j-1].vw=temp ;

                temp=x[j].v;
                x[j].v=x[j-1].v;
                x[j-1].v=temp ;

                temp=x[j].wt;
                x[j].wt=x[j-1].wt;
                x[j-1].wt=temp ;

                t=x[j].ct;
                x[j].ct=x[j-1].ct;
                x[j-1].ct=t ;
             }
         }
     }*/
     for(i=1;i<=n;i++)
     {
         cout<<X[i].ct<<' '<<X[i].vw<<endl;
     }
     for(i=1;i<=n && w>0.0 ;i++)
     {
         if(w-X[i].wt >= 0.0)
         {
             w-=X[i].wt;
             printf("Item %d: Value %.0llf Weight %.0llf\n",X[i].ct,X[i].v,X[i].wt);
             sum+=X[i].v;
         }
         else
         {
             y=X[i].vw *w;
             printf("Item %d: Value %.0llf Weight %.0llf\n",X[i].ct,y,X[i].wt);
             sum+=y;
             w=0.0;
         }
     }
     cout<<"Maximum Valuation = "<<sum<<endl;


    return 0;
 }
 bool comp(struct ks &i,struct ks &j)
 {
     return i.vw > j.vw;
 }



