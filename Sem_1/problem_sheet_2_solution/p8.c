#include<stdio.h>
int main()
{
    int num,n,i,cube,digit,j;

    printf("Enter the num.");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        n=i;
        j=n;
        int sum=0;
        while(n!=0)
        {
            digit=n%10;
            cube=digit*digit*digit;
            sum+=cube;
            n/=10;
            
        }
        if(sum==j)
        {
            printf("%d",j);
        }
        return 0;
    }

}