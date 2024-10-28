#include<stdio.h>
int main()
{
    int i,j,a[3][3],row,T,col;

    //inputting the array
    printf("Enter the array elelments:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //printing the array
    printf("Your entered array elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int k;

    //shorting of array elements row wise
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(a[i][j]<a[i][k])
                {
                    T=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=T;
                }
            }
        }
    }

    //printing those shorted elements
    printf("Your shorted elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}