#include<stdio.h>
int main()
{
    int n,a[100],i;

    printf("Enter the number of elements.");
    scanf("%d",&n);

    printf("Enter th elements.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("reverse the integer array.");
    for(i=n-1;i>=0;i--)
    {
        
        printf("%d",a[i]);
        
    }
    return 0;
}