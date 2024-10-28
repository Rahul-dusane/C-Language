#include<stdio.h>
int main()
{
    int n,x,p,a[100],i;

        
    printf("\n");
    go:
    printf("\nEnter the array size:\n");
    scanf("%d",&n);

    printf("ENter the array elements.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Your entered array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEter the position of element:\n");
    scanf("%d",&p);

    if(p>n || p<0)
    {
        printf("Enter the valid position.");
        goto go;
    }
    else
    {
        for(i=p-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }

    }
    
    printf("Your new array elements are:\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    a[i]=0;
    goto go;
    return 0;
}