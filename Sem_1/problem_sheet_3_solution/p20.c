#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the value of 'm'.");
    scanf("%d",&m);
    printf("Enter the value of 'n'.");
    scanf("%d",&n);

    int a[m][n];
    printf("Enter the array elements.");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your array elements are:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int sum[m];
    for (int  i = 0; i < m; i++)
    {
        sum[i]=0;
        for(int j=0;j<n;j++)
        {
            sum[i]=sum[i]+a[j][i];
        }
    }

    for(int i=0;i<m;i++)
    {
        printf("Sum of column %d is %d.\n",i+1,sum[i]);
    }
    return 0;
}