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
    item *head,*m,*tail,*temp,*head1;
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

    temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
    head1=temp;

    return 0;
}
