#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
typedef struct student{
    char name[30];
    int id;
    double cgpa;
}ob;
void sortid(ob *p,int n);
void dis(ob *p,int n);
void sortc(ob *p,int n);
int main()
{
    ob s[10],*p;
    int n,i,j,k,c;
    cout<<"Number of students : ";
    cin>>n;
    p=s;
    for(i=0;i<n;i++)
    {
        scanf("%s",(p+i)->name);
        cin>>(p+i)->id>>(p+i)->cgpa;
    }
    for(;;)
    {
        cout<<"Enter 1 to display according to id in ascending order\n";
        cout<<"Enter 2 to display according to cgpa in descending order\n";
        cin>>c;
        switch(c)
        {
            case 1:sortid(p,n);
                    dis(p,n);
                    break;
            case 2:sortc(p,n);
                    dis(p,n);
                    break;
            case 0:exit(0);
        }
    }

    return 0;
}
void sortid(ob *p,int n)
{
    ob temp;
    int i,j;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if((p+i)->id > (p+i+1)->id)
            {
                strcpy(temp.name,(p+i)->name);
                strcpy((p+i)->name,(p+i+1)->name);
                strcpy((p+i+1)->name,temp.name);

                temp.id=(p+i)->id;
                (p+i)->id=(p+i+1)->id;
                (p+i+1)->id=temp.id;

                temp.cgpa=(p+i)->cgpa;
                (p+i)->cgpa=(p+i+1)->cgpa;
                (p+i+1)->cgpa=temp.cgpa;
            }
        }
    }
    return;
}
void dis(ob *p,int n)
{
    int i;
    printf("ID       CGPA        NAME\n");
    for(i=0;i<n;i++)
    {
        printf("%d      %.2lf         %s\n",(p+i)->id,(p+i)->cgpa,(p+i)->name);
    }
    return;
}
void sortc(ob *p,int n)
{
    ob temp;
    int i,j;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if((p+i)->cgpa < (p+i+1)->cgpa)
            {
                strcpy(temp.name,(p+i)->name);
                strcpy((p+i)->name,(p+i+1)->name);
                strcpy((p+i+1)->name,temp.name);

                temp.id=(p+i)->id;
                (p+i)->id=(p+i+1)->id;
                (p+i+1)->id=temp.id;

                temp.cgpa=(p+i)->cgpa;
                (p+i)->cgpa=(p+i+1)->cgpa;
                (p+i+1)->cgpa=temp.cgpa;
            }
        }
    }
    return;
}


