#include<stdio.h>
int main()
{
    int num1=0,num2=1,num3,i,num;

    printf("Enter the number:\n");
    scanf("%d",&num);

    printf("Number 1 value is=%d\n",num1);
    printf("Number 2 value is=%d",num2);

    for(i=2;i<=num;i++)
    {
        num3=num1+num2;
        printf("\nNumber %d value is=%d",i,num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}