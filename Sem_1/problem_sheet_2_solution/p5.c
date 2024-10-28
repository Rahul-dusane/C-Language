#include<stdio.h>
int main()
{
    int num,digit,sum,count;

    printf("Enter the number.\n");
    scanf("%d",&num);

   
   
  while(num!=0)
  {
    num=num/10;
    count=count+1;
  }
  printf("%d",count);
   return 0;
}