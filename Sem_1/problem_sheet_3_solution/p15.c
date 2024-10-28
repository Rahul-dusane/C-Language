#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the m value:");
    scanf("%d",&m);
    printf("Enter the n value:");
    scanf("%d",&n);

    int a[m][n];

    printf("enter the array element:");
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   int max=0,res[m],i=0,j,k;

    while(i<m)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
            res[i]=max;
             max=0;
             i++;

    }
    for(i=0;i<m;i++)
    {
        printf(" Largest element in row %d is %d.\n",i,res[i]);

    }
     i=0;
    while(i<n)
    {
        for(k=0;k<m;k++)
        {
            if(a[k][i]>max)
            {
                max=a[k][i];
            }
        }
        res[i]=max;
        max=0;
        i++;

    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf(" Largest element in col %d is %d.\n",i,res[i]);

    }
    return 0;
}