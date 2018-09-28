#include<stdio.h>
int main()
{
    int a,i;
    char t[30];
    FILE *f;
    fscanf(stdin,"%s",t);
    /*f=fopen(t,"w");

    while((fscanf(stdin,"%d",&a))==1)
    {
        fprintf(f,"%d ",a);
    }
    fclose(f);*/
    f=fopen(t,"r");

    while((fscanf(f,"%d",&a))==1)
    {
        fprintf(stdout,"%d\n",a);
    }
    fclose(f);


    return 0;
}
