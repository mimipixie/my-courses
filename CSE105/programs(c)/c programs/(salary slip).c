main(){
    char a[100];
    float p,q,r,s,x;
    printf("Enter Employee Name: ");
    scanf("%[^\n]s",a);
    printf("Enter basic pay    :");
    scanf("%f",&p);
    q=.4*p;
    r=.05*p;
    s=.75*p;
    x=p+q+r+s;
    printf("***********SALARY SLIP***********\n");
    printf("Name             : %s\n",a);
    printf("Basic pay        : %20.2f\n",p);
    printf("House Rent       : %20.2f\n",q);
    printf("Medical Allowance: %20.2f\n",r);
    printf("Eid Bonus        : %20.2f\n",s);
    printf("----------------------------------------\n");
    printf("Grand Total      : %20.2f\n",x);
}
