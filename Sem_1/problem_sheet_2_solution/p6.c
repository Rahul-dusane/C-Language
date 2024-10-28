#include<stdio.h>
int main()
{
    int num,sum,i;

    printf("Enter the number.");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        sum=num*i;
        printf(" %d * %d = %d\n",num,i,sum);
    }
    return 0;
}