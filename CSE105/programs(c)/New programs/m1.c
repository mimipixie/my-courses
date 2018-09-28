int main()
{   int A[10][10],B[10][10],C[10][10],D[10][10],i,j,m,n;

    printf("m = ");
    scanf("%d",&m);

    printf("n = ");
    scanf("%d",&n);

    printf("\nmat A : \n");
    for(i=1;i<=m;i++)
    {   for(j=1;j<=n;j++)
        {   scanf("%d",&A[i][j]);}
    }

    printf("\nmat B : \n");
    for(i=1;i<=m;i++)
    {   for(j=1;j<=n;j++)
        {   scanf("%d",&B[i][j]);}
    }

    printf("\nmat A + mat B : \n");
    for(i=1;i<=m;i++)
    {   for(j=1;j<=n;j++)
        {   C[i][j]=A[i][j]+B[i][j];
            printf("%4d",C[i][j]);}
        printf("\n");
    }
    printf("\nmat A - mat B : \n");
    for(i=1;i<=m;i++)
    {   for(j=1;j<=n;j++)
        {   D[i][j]=A[i][j]-B[i][j];
            printf("%4d",D[i][j]);}
        printf("\n");
    }

    return 0;
}