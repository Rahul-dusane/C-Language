#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the value of 'm'.\n");
    scanf("%d",&m);
    printf("Enter the value of 'n'.\n");
    scanf("%d",&n);

    int a[m][n];

    printf("Enter the array elements:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your entered array elements are:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int sum;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum of all array elements are : %d",sum);
    return 0;
}