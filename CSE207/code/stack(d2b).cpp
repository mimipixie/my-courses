#include<cstdio>
#include<cstdlib>
using namespace std;
typedef struct node{
    int num;
    struct node *next;
}item;
node* push(node *m,node *top);
int main()
{
    item *m,*top,*temp;
    int val,i,j,k,s;

    printf("Enter size of stack: ");
    scanf("%d",&s);
    printf("Enter items:\n");
    top=NULL;
for(i=1;i<=s;i++)
{
    m=(node*)malloc(sizeof(node));
    scanf("%d",&val);
    m->num=val;
    m->next=NULL;
    top=push(m,top);
}

    printf("Displaying items from the stack: ");
    temp=top;
while(temp!=NULL)
{
    printf("%d ",temp->num);
    temp=temp->next;
}
    printf("\n");

    return 0;
}

node* push(node *m,node *top)
{
    if(top==NULL)
    {
        top=m;
    }
    else
    {
        m->next=top;
        top=m;
    }
    return top;
}
