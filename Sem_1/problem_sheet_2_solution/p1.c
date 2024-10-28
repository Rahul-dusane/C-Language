#include<stdio.h>
int main()
{
    int num,comp=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            comp=comp+1;;
        }
    }

    if(comp==2)
    {
        printf("Your num is prime.");
    }
    else{
        printf("your num is not prime.");
    }
    return 0;
}