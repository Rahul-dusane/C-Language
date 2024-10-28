#include<stdio.h>
int main()
{
    int m,n;

    printf("Enter the value of 'm':");
    scanf("%d",&m);
    printf("Enter the value of 'n':");
    scanf("%d",&n);

    int a[m][n];

    printf("Enter the element of array:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your array element are:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int min=a[0][0];
    int i=0,j,k,res[m];
    while(i<m)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
        res[i]=min;
        min=a[i+1][0];
        i++;
    }

    for(i=0;i<m;i++)
    {
        printf("smallest element in row %d is %d.\n",i,res[i]);
    }

    for (int i = 0; i < n; i++) {
        min = a[0][i];
        for (int j = 1; j < m; j++) {
            if (a[j][i] < min) {
                min = a[j][i];
            }
        }
        res[i] = min;
    }

    for(int i=0;i<n;i++)
    {
        printf("smallest element in col %d is %d.\n",i,res[i]);
    }

    return 0;
}