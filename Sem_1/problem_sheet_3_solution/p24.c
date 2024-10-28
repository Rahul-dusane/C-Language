#include<stdio.h>
int main()
{
    int a[5],c[10];
    int i;

    printf("Enter the first array elements :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    int b[5];

    printf("Enter the elements of second array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        c[i+5]=b[i];
    }     
    printf("Your array elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }

    int temp;

    for(i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(c[i]>c[j])
            {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
            }
        }
    }

    printf("\nYour shorted elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}