#include<stdio.h>
int main()
{
    int num,sum=0,i;

    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i+=2)
    {
       sum=sum+i;         
    }
      printf("%d",sum);
    return 0; 
}