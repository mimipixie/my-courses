#include<stdio.h>
#include<math.h>

int parent(int i)
{
    return i/2;
}
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return (2*i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n+1];

    int i;

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    int p = 0, tot = 0, k, j;
    i = 1;
    while(i<=n)
    {
        k = pow(2,p);
        for( j = 1; j<=k && i<=n; j++, i++) printf("%d(%d) ", a[i], i);

        p++;
        printf("\n");
    }

    int root, child;
    printf("Enter root index : ");
    scanf("%d", &root);

    int chl = left(root), chr = right(root);

    (chl<=n)? printf("%d ", a[chl]): printf("No left child ");
    (chr<=n)? printf("%d\n", a[chr]): printf(" || No right child\n");

    printf("Enter child index : ");
    scanf("%d", &child);

    int r = parent(child);
    (r>=1 && r<=n)? printf("%d\n", a[r]): printf("No root\n");
}

