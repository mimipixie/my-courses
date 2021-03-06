#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
typedef struct tree{
char data;
struct tree *l,*r;
}item;
struct tree * insert(struct tree *root,char val);
struct tree * search(struct tree *root,char val);
struct tree * Min(struct tree *root);
struct tree * Max(struct tree *root);
void inorder(struct tree *root);
void preorder(struct tree *root);
void postorder(struct tree *root);
int main()
{
    item *root=NULL,*temp;
    int i,j,k,n,s,c;
    char val;
for(;;)
{
    cout<<"Enter operation : ";
    cin>>c;
switch(c)
{
case 1:
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter items : \n";
    for(i=1;i<=n;i++)
    {
        //cout<<"\t";
        cin>>val;
        root=insert(root,val);
    }cout<<"Data inserted\n";
    break;
case 2:
    cout<<"Enter value : ";
    cin>>val;
    temp=search(root,val);
    cout<<"Search complete\n";
    break;
case 3:
    cout<<"Infix : ";
    inorder(root);
    cout<<"\n";
    break;
case 4:
    cout<<"Prefix : ";
    preorder(root);
    cout<<"\n";
    break;
case 5:
    cout<<"Postfix : ";
    postorder(root);
    cout<<"\n";
    break;
default:
    cout<<"operation failed\n";
    break;
case 0:
    exit(0);
}
}
    return 0;
}
struct tree * insert(struct tree *root,char val)
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
    else if(root->data>val)
    {
        root->l=insert(root->l,val);
    }
    else if(root->data<=val)
    {
        root->r=insert(root->r,val);
    }
    return root;
}
struct tree * search(struct tree *root,char val)
{
     item *temp=root;
     if(root->data>val)
    {
        temp=search(temp->l,val);
    }
    else if(root->data<=val)
    {
        temp=insert(temp->r,val);
    }
   return temp;
}
struct tree * Min(struct tree *root)
{
    if(root->l==NULL)
    {
        return root;
    }
    return Min(root->l);
}
struct tree * Max(struct tree *root)
{
    if(root->r==NULL)
    {
        return root;
    }
    return Min(root->r);
}
void inorder(struct tree *root)
{
    if(root->l!=NULL)
    {
        inorder(root->l);
    }
    cout<<root->data<<" ";
    if(root->r!=NULL)
    {
        inorder(root->r);
    }
    return;
}
void preorder(struct tree *root)
{
    cout<<root->data<<" ";
    if(root->l!=NULL)
    {
        preorder(root->l);
    }
    if(root->r!=NULL)
    {
        preorder(root->r);
    }
    return;
}
void postorder(struct tree *root)
{
    if(root->l!=NULL)
    {
        postorder(root->l);
    }
    if(root->r!=NULL)
    {
        postorder(root->r);
    }
    cout<<root->data<<" ";
    return;
}
