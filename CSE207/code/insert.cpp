#include<cstdio>
#include<cstdlib>
using namespace std;
typedef struct node{
    int num;
    struct node *next;
}item;
int main()
{
    int val,i,j,k,s,p;
    item *head,*m,*tail,*temp;
    printf("Enter size of list: ");
    scanf("%d",&s);
    printf("Enter items:\n");
    head=NULL;
for(i=1;i<=s;i++)
{
    m=(node*)malloc(sizeof(node));
    scanf("%d",&val);
    m->num=val;
    m->next=NULL;
    if(head==NULL)
    {
        head=m;
        tail=m;
    }
    else
    {
        tail->next=m;
        tail=m;
    }
}

    printf("Displaying items from the list: ");
    temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->num);
    temp=temp->next;
}
    printf("\n");
    printf("Enter new item position to the list: ");
    scanf("%d",&p);
    temp=head;
for(i=1;i<p-1;i++)
{
    temp=temp->next;
}
    printf("Insert item to the list: ");
    m=(node*)malloc(sizeof(node));
    scanf("%d",&val);
    m->num=val;
    m->next=temp->next;
    temp->next=m;
    printf("Displaying items from the list: ");
    temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->num);
    temp=temp->next;
}
    printf("\n");


    return 0;
}
