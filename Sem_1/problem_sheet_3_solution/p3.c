#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0;

    printf("Enter the number of array element");
    scanf("%d",&n);

    printf("Enter the number.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}