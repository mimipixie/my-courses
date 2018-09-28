#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
typedef struct tree{
int data;
struct tree *l,*r;
}item;
struct tree * insert(struct tree *root,int val);
int search(struct tree *root,int val);
void pre(struct tree *root);
int main()
{
    item *root;
    int val,n,i,j,k,c,p;
    root=NULL;
    printf("Enter number of element : ");
    cin>>n;
    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        cin>>val;
        root=insert(root,val);
    }
    pre(root);
    printf("\nEnter value of node : ");
    cin>>val;
    c=search(root,val);
    printf("Number of that element : %d\n",c);

    return 0;
}
struct tree * insert(struct tree *root,int val)
{
    item *newN;
    if(root==NULL)
    {
        newN=(struct tree *)malloc(sizeof(struct tree));
        newN->data=val;
        newN->l=NULL;
        newN->r=NULL;
        root=newN;
    }
    else if(root->data > val)
    {
        root->l=insert(root->l,val);
    }
    else if(root->data <= val)
    {
        root->r=insert(root->r,val);
    }
    return root;
}
void pre(struct tree *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        pre(root->l);
        pre(root->r);
    }
}
int search(struct tree *root,int val)
{
    int c=0;
    while(root!=NULL)
    {
    if(root->data > val)
    {
        root=root->l;
    }
    else if(root->data == val)
    {
        c=c+1;
        root=root->r;
    }
    else
    {
        root=root->r;
    }

    }


   return c;
}

