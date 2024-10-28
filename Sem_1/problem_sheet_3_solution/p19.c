#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the value of 'm'.");
    scanf("%d",&m);
    
    printf("Enter the value of 'n'.");
    scanf("%d",&n);

    int a[m][n];
    int i,j,b;
    int sum[m];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        sum[i]=0;
        for(j=0;j<n;j++)
        {
            sum[i]=sum[i]+a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        printf("sum of %d row is %d.\n",i,sum[i]);
    }
    
    return 0;
}