#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
typedef struct tree{
int data,h;
struct tree *l,*r;
}item;
struct tree * insert(struct tree *root,int val);
struct tree * search(struct tree *root,int val);
struct tree * Min(struct tree *root);
struct tree * Max(struct tree *root);
struct tree * newnode(int val);
int maxH(struct tree *l,struct tree *r);
int height(struct tree *n);
int bf(struct tree *n);
struct tree * ll(struct tree *x);
void inorder(struct tree *root);
void preorder(struct tree *root);
void postorder(struct tree *root);
int main()
{
    item *root=NULL,*temp;
    int i,j,k,n,val,s,c;
for(;;)
{
    cout<<"Enter operation : ";
    cin>>c;
switch(c)
{
case 1:
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter values : \n";
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

int height(struct tree *n)
{
    if(n==NULL)
        return 0;
    else
        return n->h;
}
int maxH(int l,int r)
{
    if(l > r)
        return l;
    else
        return r;
}
int bf(struct tree *n)
{
    if(n==NULL)
        return 0;
    else
        return height(n->l)-height(n->r) ;
}
struct tree * ll(struct tree *x)
{
    struct tree *y;
    y=x->l;
    x->l=y->r;
    y->r=x;

    x->h= maxH(height(x->l),height(x->r)) +1;
    y->h= maxH(height(y->l),height(y->r)) +1;

    return y;
}
struct tree * newnode(int val)
{
    item *newN;
        newN=(struct tree *)malloc(sizeof(struct tree));
        newN->data=val;
        newN->l=NULL;
        newN->r=NULL;
        newN->h=1;
    return newN;
}
struct tree * insert(struct tree *root,int val)
{
    int b;
    if(root==NULL)
    {
        return newnode(val);
    }
    if(root->data>val)
    {
        root->l=insert(root->l,val);
    }
    else
    {
        root->r=insert(root->r,val);
    }
    root->h= maxH(height(root->l),height(root->r)) +1;

    b=bf(root);
    if(b>1 && val< root->l->data)
        return ll(root);

    return root;
}
struct tree * search(struct tree *root,int val)
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
    if(root!=NULL)
    {
        inorder(root->l);
        cout<<root->data<<" ";
        inorder(root->r);
    }
    return;
}
void preorder(struct tree *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->l);
        preorder(root->r);
    }
    return;
}
void postorder(struct tree *root)
{
    if(root!=NULL)
    {
        postorder(root->l);
        postorder(root->r);
        cout<<root->data<<" ";
    }
    return;
}
