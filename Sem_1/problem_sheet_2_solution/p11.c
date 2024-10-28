#include<stdio.h>
int main()
{
    int num,digit,sum;

            start:

    printf("Enter the number.");
    scanf("%d",&num);

    while(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("%d",sum);
    goto start;
    return 0;
}