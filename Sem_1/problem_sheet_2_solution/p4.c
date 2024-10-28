#include<stdio.h>
int main()
{
    int num,sum=0,cube,digit,i;

    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Enter positiv value : ");
        return 1;
    }
    else{
        printf("\n");
    }

    i=num;

    while(num!=0)
    {
        digit=num%10;
        cube=digit*digit*digit;
        sum=sum+cube;
        num=num/10;
    }
    if(sum==i)
    {
        printf("Your enterd number(%d)is armstrong.",sum);

    }
    else
    {
        printf("Your enterd number(%d)is not armstrong.",i);
    }
    return 0;

}